/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lamp
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Lamp.h
*********************************************************************/

#ifndef Lamp_H
#define Lamp_H

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
//## class Lamp
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Lamp
class Lamp : public OMReactive, public Module<> {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Lamp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Lamp();
    
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
    
    // inactive:
    //## statechart_method
    inline bool inactive_IN() const;
    
    // blink:
    //## statechart_method
    inline bool blink_IN() const;
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Lamp_Enum {
        OMNonState = 0,
        inactive = 1,
        blink = 2,
        active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Lamp::rootState_IN() const {
    return true;
}

inline bool Lamp::inactive_IN() const {
    return rootState_subState == inactive;
}

inline bool Lamp::blink_IN() const {
    return rootState_subState == blink;
}

inline bool Lamp::active_IN() const {
    return rootState_subState == active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lamp.h
*********************************************************************/
