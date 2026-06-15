/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: machineoperator
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\machineoperator.cpp
*********************************************************************/

//## auto_generated
#include "machineoperator.h"
//## link itsServiceman
#include "serviceman.h"
//## package Default

//## actor machineoperator
machineoperator::machineoperator() {
    itsServiceman = NULL;
}

machineoperator::~machineoperator() {
    cleanUpRelations();
}

serviceman* machineoperator::getItsServiceman() const {
    return itsServiceman;
}

void machineoperator::setItsServiceman(serviceman* p_serviceman) {
    if(p_serviceman != NULL)
        {
            p_serviceman->_setItsMachineoperator(this);
        }
    _setItsServiceman(p_serviceman);
}

void machineoperator::cleanUpRelations() {
    if(itsServiceman != NULL)
        {
            machineoperator* p_machineoperator = itsServiceman->getItsMachineoperator();
            if(p_machineoperator != NULL)
                {
                    itsServiceman->__setItsMachineoperator(NULL);
                }
            itsServiceman = NULL;
        }
}

void machineoperator::__setItsServiceman(serviceman* p_serviceman) {
    itsServiceman = p_serviceman;
}

void machineoperator::_setItsServiceman(serviceman* p_serviceman) {
    if(itsServiceman != NULL)
        {
            itsServiceman->__setItsMachineoperator(NULL);
        }
    __setItsServiceman(p_serviceman);
}

void machineoperator::_clearItsServiceman() {
    itsServiceman = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\machineoperator.cpp
*********************************************************************/
