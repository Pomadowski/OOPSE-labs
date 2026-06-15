/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsController
class Controller;

//## auto_generated
class Detector;

//## auto_generated
class Display;

//## auto_generated
class Drive;

//## auto_generated
class Lamp;

//## auto_generated
template <> class Module;

//## auto_generated
class Receiver;

//## classInstance tsController
class tsController_C;

//#[ ignore
#define evSignal_Default_id 18601

#define eventmessage_0_Default_id 18602

#define evStop_Default_id 18603

#define evStart_Default_id 18604

#define evStep_Default_id 18605

#define evCheckCollision_Default_id 18606

#define evCollision_Default_id 18607

#define evError_Default_id 18608

#define evSuccess_Default_id 18609

#define evRegulate_Default_id 18610

#define evFirmware_Default_id 18611

#define evTest_Default_id 18612

#define evFail_Default_id 18613

#define evOK_Default_id 18614

#define evFAIL_Default_id 18615

#define evActivate_Default_id 18616
//#]

//## package Default


//## type States
enum States {
    STOPPED = 0,
    OPENING = 1,
    CLOSING = -1
};

//## classInstance itsController
extern Controller itsController;

//## classInstance tsController
extern tsController_C tsController;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

//## event evSignal()
class evSignal : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSignal();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStop()
class evStop : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStart()
class evStart : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStep(float)
class evStep : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStep(float p_distance);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    float distance;		//## auto_generated
};

//## event evCheckCollision()
class evCheckCollision : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCheckCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evCollision()
class evCollision : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evError()
class evError : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evError();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evSuccess()
class evSuccess : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSuccess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evRegulate()
class evRegulate : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evRegulate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evFirmware()
class evFirmware : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFirmware();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evTest()
class evTest : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evTest();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evFail()
class evFail : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFail();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evOK()
class evOK : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOK();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evFAIL()
class evFAIL : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFAIL();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evActivate()
class evActivate : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evActivate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
