/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: serviceman
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\serviceman.h
*********************************************************************/

#ifndef serviceman_H
#define serviceman_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## actor serviceman
#include "machineoperator.h"
//## package Default

//## actor serviceman
class serviceman : public machineoperator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    serviceman();
    
    //## auto_generated
    ~serviceman();
    
    ////    Additional operations    ////
    
    //## auto_generated
    machineoperator* getItsMachineoperator() const;
    
    //## auto_generated
    void setItsMachineoperator(machineoperator* p_machineoperator);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    machineoperator* itsMachineoperator;		//## link itsMachineoperator
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMachineoperator(machineoperator* p_machineoperator);
    
    //## auto_generated
    void _setItsMachineoperator(machineoperator* p_machineoperator);
    
    //## auto_generated
    void _clearItsMachineoperator();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\serviceman.h
*********************************************************************/
