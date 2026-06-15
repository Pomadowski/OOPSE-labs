/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Detector
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Detector.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Detector.h"
//## link itsController
#include "Controller.h"
//## package Default

//## class Detector
Detector::Detector(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Detector::~Detector() {
    cleanUpRelations();
}

void Detector::message_0() {
    //#[ operation message_0()
    //#]
}

void Detector::reset_counters() {
    //#[ operation reset_counters()
    //#]
}

Controller* Detector::getItsController() const {
    return itsController;
}

void Detector::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Detector::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Detector::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Detector::cleanUpRelations() {
    if(itsController != NULL)
        {
            itsController = NULL;
        }
}

void Detector::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Detector::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Detector::_clearItsController() {
    itsController = NULL;
}

void Detector::rootState_entDef() {
    {
        rootState_subState = inactive;
        rootState_active = inactive;
    }
}

IOxfReactive::TakeEventStatus Detector::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State inactive
        case inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    rootState_subState = active;
                    rootState_active = active;
                    res = eventConsumed;
                }
            
        }
        break;
        // State active
        case active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    rootState_subState = inactive;
                    rootState_active = inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
                {
                    //#[ transition 2 
                    pulses_sent += margin;
                    //#]
                    rootState_subState = active;
                    rootState_active = active;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCheckCollision_Default_id))
                {
                    //## transition 1 
                    if(checkCollision())
                        {
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController->GEN(evCollision);
                            //#]
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    //#[ transition 0 
                    reset_counters();
                    //#]
                    rootState_subState = active;
                    rootState_active = active;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Detector.cpp
*********************************************************************/
