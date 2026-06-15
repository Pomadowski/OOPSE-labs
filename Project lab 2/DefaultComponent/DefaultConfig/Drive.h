/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Drive.h
*********************************************************************/

#ifndef Drive_H
#define Drive_H

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
//## class Drive
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Drive
class Drive : public OMReactive, public Module<> {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Drive(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Drive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // inactive:
    //## statechart_method
    inline bool inactive_IN() const;
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Drive_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        inactive = 2,
        active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Drive::rootState_IN() const {
    return true;
}

inline bool Drive::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Drive::inactive_IN() const {
    return rootState_subState == inactive;
}

inline bool Drive::active_IN() const {
    return rootState_subState == active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Drive.h
*********************************************************************/
