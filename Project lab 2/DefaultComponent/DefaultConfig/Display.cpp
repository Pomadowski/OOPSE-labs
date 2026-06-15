/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/

//## auto_generated
#include "Display.h"
//## link itsController
#include "Controller.h"
//## package Default

//## class Display
Display::Display() {
    itsController = NULL;
}

Display::~Display() {
    cleanUpRelations();
}

Controller* Display::getItsController() const {
    return itsController;
}

void Display::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

void Display::cleanUpRelations() {
    if(itsController != NULL)
        {
            itsController = NULL;
        }
}

void Display::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Display::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Display::_clearItsController() {
    itsController = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/
