/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Receiver.h"
//## link itsController
#include "Controller.h"
//## package Default

//## class Receiver
Receiver::Receiver(IOxfActive* theActiveContext) : signal_ok(false) {
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Receiver::~Receiver() {
    cleanUpRelations();
}

void Receiver::evSignal() {
    //#[ operation evSignal()
    //#]
}

void Receiver::message_0() {
    //#[ operation message_0()
    //#]
}

void Receiver::validate_signal() {
    //#[ operation validate_signal()
    //#]
}

bool Receiver::getSignal_ok() const {
    return signal_ok;
}

void Receiver::setSignal_ok(bool p_signal_ok) {
    signal_ok = p_signal_ok;
}

Controller* Receiver::getItsController() const {
    return itsController;
}

void Receiver::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Receiver::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Receiver::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Receiver::cleanUpRelations() {
    if(itsController != NULL)
        {
            itsController = NULL;
        }
}

void Receiver::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Receiver::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Receiver::_clearItsController() {
    itsController = NULL;
}

void Receiver::rootState_entDef() {
    {
        rootState_subState = inactive;
        rootState_active = inactive;
    }
}

IOxfReactive::TakeEventStatus Receiver::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State inactive
        case inactive:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    //## transition 1 
                    if(params->active)
                        {
                            rootState_subState = active;
                            rootState_active = active;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State active
        case active:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    rootState_subState = inactive;
                    rootState_active = inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSignal_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = validate;
                    rootState_active = validate;
                    //#[ state validate.(Entry) 
                    validate_signal();
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        // State validate
        case validate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 5 
                    if(signal_ok)
                        {
                            popNullTransition();
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            itsController->GEN(evSignal);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            rootState_subState = active;
                            rootState_active = active;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
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
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/
