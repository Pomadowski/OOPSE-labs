#pragma once
#include <string>
#include <chrono>
#include <vector>
#include <sstream>
#include <stdexcept>

template<typename T = short, int N = 1024>
struct ADC {
    int bits;
    std::chrono::milliseconds clock_rate;
    double rangeMin, rangeMax;
    double sensitivity;
    double trigger_level;
    std::vector<T> samples;

public:
    T convert(double voltage) {
        if (voltage < rangeMin || voltage > rangeMax) {
            throw std::out_of_range("Voltage out of range");
        }

        double normalized = (voltage - rangeMin) / (rangeMax - rangeMin);
        return static_cast<T>(normalized * ((1 << bits) - 1));
    }

    size_t read_input(std::vector<double>& inputs) {
        size_t count = 0;

        for (double value : inputs) {
            if (value >= trigger_level) {
                if (samples.size() >= N) {
                    break;
                }

                samples.push_back(convert(value));
                count++;
            }
        }

        return count;
    }

    double value(size_t i) {
        if (i >= samples.size()) {
            throw std::out_of_range("Index out of range");
        }

        double normalized = static_cast<double>(samples[i]) / ((1 << bits) - 1);
        double voltage = rangeMin + normalized * (rangeMax - rangeMin);

        return voltage * sensitivity;
    }

    std::vector<double> values() {
        std::vector<double> result;

        for (size_t i = 0; i < samples.size(); ++i) {
            result.push_back(value(i));
        }

        return result;
    }

    std::string to_string() {
        std::ostringstream oss;

        oss << "ADC(";
        oss << "bits=" << bits << ",";
        oss << "range=[" << rangeMin << "," << rangeMax << "],";
        oss << "trigger=" << trigger_level << ",";
        oss << "samples=" << samples.size();
        oss << ")";

        return oss.str();
    }
};