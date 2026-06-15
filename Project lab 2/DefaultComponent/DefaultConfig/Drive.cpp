/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Drive.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Drive.h"
//## link itsController
#include "Controller.h"
//## package Default

//## class Drive
Drive::Drive(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Drive::~Drive() {
    cleanUpRelations();
    cancelTimeouts();
}

Controller* Drive::getItsController() const {
    return itsController;
}

void Drive::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Drive::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Drive::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Drive::cleanUpRelations() {
    if(itsController != NULL)
        {
            itsController = NULL;
        }
}

void Drive::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Drive::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Drive::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Drive::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Drive::_clearItsController() {
    itsController = NULL;
}

void Drive::rootState_entDef() {
    {
        rootState_subState = inactive;
        rootState_active = inactive;
    }
}

IOxfReactive::TakeEventStatus Drive::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State inactive
        case inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    //#[ transition 2 
                    direction = params -> state;
                    //#]
                    rootState_subState = active;
                    rootState_active = active;
                    rootState_timeout = scheduleTimeout(period, NULL);
                    res = eventConsumed;
                }
            
        }
        break;
        // State active
        case active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    cancel(rootState_timeout);
                    rootState_subState = inactive;
                    rootState_active = inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            //#[ transition 4 
                            std::cout<<\n drive: period=" <<period<<"  velocity= " << velocity <<" direction= " << direction << std::endl;
                            //#]
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController->GEN(evStep(0.001*period*velocity*direction));
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
                    rootState_subState = active;
                    rootState_active = active;
                    rootState_timeout = scheduleTimeout(period, NULL);
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
	File Path	: DefaultComponent\DefaultConfig\Drive.cpp
*********************************************************************/
