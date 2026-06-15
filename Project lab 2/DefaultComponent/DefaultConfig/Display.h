/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## class Display
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Display
class Display : public Module<> {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Display();
    
    //## auto_generated
    ~Display();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);

protected :

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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/
