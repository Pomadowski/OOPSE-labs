/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: machineoperator
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\machineoperator.h
*********************************************************************/

#ifndef machineoperator_H
#define machineoperator_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsServiceman
class serviceman;

//## package Default

//## actor machineoperator
class machineoperator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    machineoperator();
    
    //## auto_generated
    ~machineoperator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    serviceman* getItsServiceman() const;
    
    //## auto_generated
    void setItsServiceman(serviceman* p_serviceman);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    serviceman* itsServiceman;		//## link itsServiceman
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsServiceman(serviceman* p_serviceman);
    
    //## auto_generated
    void _setItsServiceman(serviceman* p_serviceman);
    
    //## auto_generated
    void _clearItsServiceman();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\machineoperator.h
*********************************************************************/
