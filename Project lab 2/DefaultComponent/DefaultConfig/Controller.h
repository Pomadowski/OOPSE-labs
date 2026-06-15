/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsDetector
#include "Detector.h"
//## classInstance itsDisplay
#include "Display.h"
//## classInstance itsDrive
#include "Drive.h"
//## classInstance itsLamp
#include "Lamp.h"
//## class Controller
#include "Module.h"
//## classInstance itsReceiver
#include "Receiver.h"
//## package Default

//## class Controller
class Controller : public OMReactive, public Module<> {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Operations    ////
    
    //## operation evSingal()
    void evSingal();
    
    //## operation message_0()
    void message_0();
    
    //## operation set_state()
    void set_state();
    
    ////    Additional operations    ////
    
    //## auto_generated
    States getState() const;
    
    //## auto_generated
    void setState(States p_state);
    
    //## auto_generated
    States getState0() const;
    
    //## auto_generated
    void setState0(States p_state0);
    
    //## auto_generated
    Detector* getItsDetector() const;
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Display* getItsDisplay_1() const;
    
    //## auto_generated
    Drive* getItsDrive() const;
    
    //## auto_generated
    Drive* getItsDrive_1() const;
    
    //## auto_generated
    Lamp* getItsLamp() const;
    
    //## auto_generated
    Lamp* getItsLamp_1() const;
    
    //## auto_generated
    Receiver* getItsReceiver() const;
    
    //## auto_generated
    Receiver* getItsReceiver_1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    States state;		//## attribute state
    
    States state0;		//## attribute state0
    
    ////    Relations and components    ////
    
    Detector itsDetector;		//## link itsDetector
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Display itsDisplay_1;		//## link itsDisplay_1
    
    Drive itsDrive;		//## classInstance itsDrive
    
    Drive itsDrive_1;		//## link itsDrive_1
    
    Lamp itsLamp;		//## classInstance itsLamp
    
    Lamp itsLamp_1;		//## link itsLamp_1
    
    Receiver itsReceiver;		//## classInstance itsReceiver
    
    Receiver itsReceiver_1;		//## link itsReceiver_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // testing:
    //## statechart_method
    inline bool testing_IN() const;
    
    // terminationstate_11:
    //## statechart_method
    inline bool terminationstate_11_IN() const;
    
    // stop:
    //## statechart_method
    inline bool stop_IN() const;
    
    // step:
    //## statechart_method
    inline bool step_IN() const;
    
    // start:
    //## statechart_method
    inline bool start_IN() const;
    
    //## statechart_method
    inline bool start_isCompleted();
    
    //## statechart_method
    void start_entDef();
    
    //## statechart_method
    void start_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus start_handleEvent();
    
    // terminationstate_19:
    //## statechart_method
    inline bool terminationstate_19_IN() const;
    
    // sendaction_18:
    //## statechart_method
    inline bool sendaction_18_IN() const;
    
    // sendaction_17:
    //## statechart_method
    inline bool sendaction_17_IN() const;
    
    // sendaction_16:
    //## statechart_method
    inline bool sendaction_16_IN() const;
    
    // servicing:
    //## statechart_method
    inline bool servicing_IN() const;
    
    // sendaction_22:
    //## statechart_method
    inline bool sendaction_22_IN() const;
    
    // sendaction_21:
    //## statechart_method
    inline bool sendaction_21_IN() const;
    
    // regulations:
    //## statechart_method
    inline bool regulations_IN() const;
    
    // ready:
    //## statechart_method
    inline bool ready_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ready_handleEvent();
    
    // operation:
    //## statechart_method
    inline bool operation_IN() const;
    
    // firmware:
    //## statechart_method
    inline bool firmware_IN() const;
    
    // error:
    //## statechart_method
    inline bool error_IN() const;
    
    // blockade:
    //## statechart_method
    inline bool blockade_IN() const;
    
    // auth:
    //## statechart_method
    inline bool auth_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        testing = 1,
        terminationstate_11 = 2,
        stop = 3,
        step = 4,
        start = 5,
        terminationstate_19 = 6,
        sendaction_18 = 7,
        sendaction_17 = 8,
        sendaction_16 = 9,
        servicing = 10,
        sendaction_22 = 11,
        sendaction_21 = 12,
        regulations = 13,
        ready = 14,
        operation = 15,
        firmware = 16,
        error = 17,
        blockade = 18,
        auth = 19
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int start_subState;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::rootState_isCompleted() {
    return ( IS_IN(terminationstate_11) );
}

inline bool Controller::testing_IN() const {
    return rootState_subState == testing;
}

inline bool Controller::terminationstate_11_IN() const {
    return rootState_subState == terminationstate_11;
}

inline bool Controller::stop_IN() const {
    return rootState_subState == stop;
}

inline bool Controller::step_IN() const {
    return rootState_subState == step;
}

inline bool Controller::start_IN() const {
    return rootState_subState == start;
}

inline bool Controller::start_isCompleted() {
    return ( IS_IN(terminationstate_19) );
}

inline bool Controller::terminationstate_19_IN() const {
    return start_subState == terminationstate_19;
}

inline bool Controller::sendaction_18_IN() const {
    return start_subState == sendaction_18;
}

inline bool Controller::sendaction_17_IN() const {
    return start_subState == sendaction_17;
}

inline bool Controller::sendaction_16_IN() const {
    return start_subState == sendaction_16;
}

inline bool Controller::servicing_IN() const {
    return rootState_subState == servicing;
}

inline bool Controller::sendaction_22_IN() const {
    return rootState_subState == sendaction_22;
}

inline bool Controller::sendaction_21_IN() const {
    return rootState_subState == sendaction_21;
}

inline bool Controller::regulations_IN() const {
    return rootState_subState == regulations;
}

inline bool Controller::ready_IN() const {
    return rootState_subState == ready;
}

inline bool Controller::operation_IN() const {
    return rootState_subState == operation;
}

inline bool Controller::firmware_IN() const {
    return rootState_subState == firmware;
}

inline bool Controller::error_IN() const {
    return rootState_subState == error;
}

inline bool Controller::blockade_IN() const {
    return rootState_subState == blockade;
}

inline bool Controller::auth_IN() const {
    return rootState_subState == auth;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/
