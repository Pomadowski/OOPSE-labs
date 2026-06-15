/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: serviceman
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\serviceman.cpp
*********************************************************************/

//## auto_generated
#include "serviceman.h"
//## package Default

//## actor serviceman
serviceman::serviceman() {
    itsMachineoperator = NULL;
}

serviceman::~serviceman() {
    cleanUpRelations();
}

machineoperator* serviceman::getItsMachineoperator() const {
    return itsMachineoperator;
}

void serviceman::setItsMachineoperator(machineoperator* p_machineoperator) {
    if(p_machineoperator != NULL)
        {
            p_machineoperator->_setItsServiceman(this);
        }
    _setItsMachineoperator(p_machineoperator);
}

void serviceman::cleanUpRelations() {
    if(itsMachineoperator != NULL)
        {
            serviceman* p_serviceman = itsMachineoperator->getItsServiceman();
            if(p_serviceman != NULL)
                {
                    itsMachineoperator->__setItsServiceman(NULL);
                }
            itsMachineoperator = NULL;
        }
}

void serviceman::__setItsMachineoperator(machineoperator* p_machineoperator) {
    itsMachineoperator = p_machineoperator;
}

void serviceman::_setItsMachineoperator(machineoperator* p_machineoperator) {
    if(itsMachineoperator != NULL)
        {
            itsMachineoperator->__setItsServiceman(NULL);
        }
    __setItsMachineoperator(p_machineoperator);
}

void serviceman::_clearItsMachineoperator() {
    itsMachineoperator = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\serviceman.cpp
*********************************************************************/
