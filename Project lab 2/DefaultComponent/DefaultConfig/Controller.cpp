/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Controller.h"
//## package Default

//## class Controller
Controller::Controller(IOxfActive* theActiveContext) : state(STOPPED), state0(CLOSING) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsReceiver.setShouldDelete(false);
        }
        {
            itsLamp.setShouldDelete(false);
        }
        {
            itsDrive.setShouldDelete(false);
        }
        {
            itsDetector.setShouldDelete(false);
        }
        {
            itsReceiver_1.setShouldDelete(false);
        }
        {
            itsDrive_1.setShouldDelete(false);
        }
        {
            itsLamp_1.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    cancelTimeouts();
}

void Controller::evSingal() {
    //#[ operation evSingal()
    //#]
}

void Controller::message_0() {
    //#[ operation message_0()
    //#]
}

void Controller::set_state() {
    //#[ operation set_state()
    //#]
}

States Controller::getState() const {
    return state;
}

void Controller::setState(States p_state) {
    state = p_state;
}

States Controller::getState0() const {
    return state0;
}

void Controller::setState0(States p_state0) {
    state0 = p_state0;
}

Detector* Controller::getItsDetector() const {
    return (Detector*) &itsDetector;
}

Display* Controller::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Display* Controller::getItsDisplay_1() const {
    return (Display*) &itsDisplay_1;
}

Drive* Controller::getItsDrive() const {
    return (Drive*) &itsDrive;
}

Drive* Controller::getItsDrive_1() const {
    return (Drive*) &itsDrive_1;
}

Lamp* Controller::getItsLamp() const {
    return (Lamp*) &itsLamp;
}

Lamp* Controller::getItsLamp_1() const {
    return (Lamp*) &itsLamp_1;
}

Receiver* Controller::getItsReceiver() const {
    return (Receiver*) &itsReceiver;
}

Receiver* Controller::getItsReceiver_1() const {
    return (Receiver*) &itsReceiver_1;
}

bool Controller::startBehavior() {
    bool done = true;
    done &= itsDetector.startBehavior();
    done &= itsDrive.startBehavior();
    done &= itsDrive_1.startBehavior();
    done &= itsLamp.startBehavior();
    done &= itsLamp_1.startBehavior();
    done &= itsReceiver.startBehavior();
    done &= itsReceiver_1.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    itsDetector._setItsController(this);
    itsDisplay_1._setItsController(this);
    itsDrive_1._setItsController(this);
    itsLamp_1._setItsController(this);
    itsReceiver_1._setItsController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    start_subState = OMNonState;
    rootState_timeout = NULL;
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsReceiver.setActiveContext(theActiveContext, false);
        itsLamp.setActiveContext(theActiveContext, false);
        itsDrive.setActiveContext(theActiveContext, false);
        itsDetector.setActiveContext(theActiveContext, false);
        itsReceiver_1.setActiveContext(theActiveContext, false);
        itsDrive_1.setActiveContext(theActiveContext, false);
        itsLamp_1.setActiveContext(theActiveContext, false);
    }
}

void Controller::destroy() {
    itsDetector.destroy();
    itsDrive.destroy();
    itsDrive_1.destroy();
    itsLamp.destroy();
    itsLamp_1.destroy();
    itsReceiver.destroy();
    itsReceiver_1.destroy();
    OMReactive::destroy();
}

void Controller::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = servicing;
        rootState_active = servicing;
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State servicing
        case servicing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = auth;
                    rootState_active = auth;
                    res = eventConsumed;
                }
            
        }
        break;
        // State auth
        case auth:
        {
            if(IS_EVENT_TYPE_OF(evSuccess_Default_id))
                {
                    rootState_subState = operation;
                    rootState_active = operation;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evError_Default_id))
                {
                    rootState_subState = error;
                    rootState_active = error;
                    rootState_timeout = scheduleTimeout(2000, NULL);
                    res = eventConsumed;
                }
            
        }
        break;
        // State error
        case error:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            rootState_subState = auth;
                            rootState_active = auth;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State operation
        case operation:
        {
            if(IS_EVENT_TYPE_OF(evTest_Default_id))
                {
                    rootState_subState = testing;
                    rootState_active = testing;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRegulate_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = regulations;
                    rootState_active = regulations;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFirmware_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = firmware;
                    rootState_active = firmware;
                    res = eventConsumed;
                }
            
        }
        break;
        // State regulations
        case regulations:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_11;
                    rootState_active = terminationstate_11;
                    res = eventConsumed;
                }
            
        }
        break;
        // State firmware
        case firmware:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_11;
                    rootState_active = terminationstate_11;
                    res = eventConsumed;
                }
            
        }
        break;
        // State testing
        case testing:
        {
            if(IS_EVENT_TYPE_OF(evOK_Default_id))
                {
                    //#[ transition 12 
                    itsReceiver.GEN(evActivate(true);
                    //#]
                    rootState_subState = ready;
                    rootState_active = ready;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFAIL_Default_id))
                {
                    //#[ transition 8 
                    itsReceiver.GEN(evActivate(false));
                    //#]
                    pushNullTransition();
                    rootState_subState = blockade;
                    rootState_active = blockade;
                    res = eventConsumed;
                }
            
        }
        break;
        // State blockade
        case blockade:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_11;
                    rootState_active = terminationstate_11;
                    res = eventConsumed;
                }
            
        }
        break;
        // State ready
        case ready:
        {
            res = ready_handleEvent();
        }
        break;
        // State stop
        case stop:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = ready;
                    rootState_active = ready;
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 25 
                    if(!state_indication)
                        {
                            popNullTransition();
                            pushNullTransition();
                            start_subState = sendaction_18;
                            rootState_active = sendaction_18;
                            //#[ state start.sendaction_18.(Entry) 
                            itsDrive.GEN(evStart);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            pushNullTransition();
                            start_subState = sendaction_17;
                            rootState_active = sendaction_17;
                            //#[ state start.sendaction_17.(Entry) 
                            itsLamp.GEN(evStart);
                            //#]
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = start_handleEvent();
                }
        }
        break;
        // State sendaction_17
        case sendaction_17:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    start_subState = sendaction_18;
                    rootState_active = sendaction_18;
                    //#[ state start.sendaction_18.(Entry) 
                    itsDrive.GEN(evStart);
                    //#]
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = start_handleEvent();
                }
        }
        break;
        // State sendaction_18
        case sendaction_18:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    start_subState = terminationstate_19;
                    rootState_active = terminationstate_19;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = start_handleEvent();
                }
        }
        break;
        // State terminationstate_19
        case terminationstate_19:
        {
            res = start_handleEvent();
        }
        break;
        // State step
        case step:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    rootState_subState = sendaction_21;
                    rootState_active = sendaction_21;
                    //#[ state sendaction_21.(Entry) 
                    itsDetector.GEN(evCheckCollision);
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 32 
                    if(!state_indication)
                        {
                            popNullTransition();
                            rootState_subState = ready;
                            rootState_active = ready;
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            pushNullTransition();
                            rootState_subState = sendaction_22;
                            rootState_active = sendaction_22;
                            //#[ state sendaction_22.(Entry) 
                            itsLamp.GEN(evStep());
                            //#]
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_22
        case sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = ready;
                    rootState_active = ready;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Controller::start_entDef() {
    pushNullTransition();
    rootState_subState = start;
    pushNullTransition();
    start_subState = sendaction_16;
    rootState_active = sendaction_16;
    //#[ state start.sendaction_16.(Entry) 
    itsDetector.GEN(evStart);
    //#]
}

void Controller::start_exit() {
    popNullTransition();
    switch (start_subState) {
        // State sendaction_16
        case sendaction_16:
        {
            popNullTransition();
        }
        break;
        // State sendaction_17
        case sendaction_17:
        {
            popNullTransition();
        }
        break;
        // State sendaction_18
        case sendaction_18:
        {
            popNullTransition();
        }
        break;
        
        default:
            break;
    }
    start_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Controller::start_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 16 
            if(IS_COMPLETED(start)==true)
                {
                    start_exit();
                    rootState_subState = ready;
                    rootState_active = ready;
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSignal_Default_id))
        {
            //## transition 18 
            if(state != STOPPED)
                {
                    pushNullTransition();
                    rootState_subState = stop;
                    rootState_active = stop;
                    res = eventConsumed;
                }
            else
                {
                    //## transition 19 
                    if(state0 == CLOSING)
                        {
                            //#[ transition 19 
                            set_state(OPENING)];
                            //#]
                            start_entDef();
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 20 
                            if(state0 == OPENING)
                                {
                                    //#[ transition 20 
                                    set_state(CLOSING)];
                                    //#]
                                    start_entDef();
                                    res = eventConsumed;
                                }
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
        {
            pushNullTransition();
            rootState_subState = stop;
            rootState_active = stop;
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStep_Default_id))
        {
            OMSETPARAMS(evStep);
            //## transition 29 
            if(state == OPENING ? (position < position_max) : (position > position_min))
                {
                    pushNullTransition();
                    rootState_subState = step;
                    rootState_active = step;
                    res = eventConsumed;
                }
            else
                {
                    pushNullTransition();
                    rootState_subState = stop;
                    rootState_active = stop;
                    res = eventConsumed;
                }
        }
    
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/
