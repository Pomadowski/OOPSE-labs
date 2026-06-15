#include <gtest/gtest.h>
#include "Channel.h"

struct ChannelFixture : public ::testing::Test {

    std::vector<double> inputs{ 1., 2., 3., 4., 1.5, 1.99, 2.5, 3.5, 4.5, 4.99 };

    ADC<short, 4> adc{16,std::chrono::milliseconds(100),-5.,5.,1.,2.};

    Channel<short, 4> channel{ std::move(adc) };
};

TEST_F(ChannelFixture, ConstructorInitialization) {
    EXPECT_EQ(channel.get_adc().bits, 16);
    EXPECT_EQ(channel.get_adc().rangeMin, -5.);
    EXPECT_EQ(channel.get_adc().rangeMax, 5.);
    EXPECT_EQ(channel.get_adc().trigger_level, 2.);
}

TEST_F(ChannelFixture, RunProcessesCorrectInputs) {
    size_t result = channel.run(inputs);

    EXPECT_EQ(result, 4);
    EXPECT_EQ(channel.get_adc().samples.size(), 4);
}

TEST_F(ChannelFixture, RunRespectsCapacityBoundary) {
    std::vector<double> largeInputs{ 2.1, 2.2, 2.3, 2.4, 2.5, 2.6 };

    size_t result = channel.run(largeInputs);

    EXPECT_EQ(result, 4);
    EXPECT_EQ(channel.get_adc().samples.size(), 4);
}

TEST_F(ChannelFixture, RunRejectsValuesOutsideRange) {
    std::vector<double> invalidInputs{ -6., 7. };

    EXPECT_THROW(channel.run(invalidInputs), std::out_of_range);
}

TEST_F(ChannelFixture, GetValuesReturnsCorrectSize) {
    channel.run(inputs);

    auto values = channel.get_values();

    EXPECT_EQ(values.size(), 4);
}

TEST_F(ChannelFixture, GetValuesForEmptySamples) {
    auto values = channel.get_values();

    EXPECT_TRUE(values.empty());
}

TEST_F(ChannelFixture, ToStringReturnsNonEmptyText) {
    std::string text = channel.to_string();

    EXPECT_FALSE(text.empty());
}

TEST_F(ChannelFixture, ToStringContainsADCText) {
    std::string text = channel.to_string();

    EXPECT_NE(text.find("ADC"), std::string::npos);
}