/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-113
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Module.h
*********************************************************************/

#ifndef Module_H
#define Module_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Module
template <> class Module {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Module();
    
    //## auto_generated
    ~Module();
    
    ////    Operations    ////
    
    //## operation get_active()
    bool get_active();
    
    //## operation is_ok()
    bool is_ok();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    bool getIs_active() const;
    
    //## auto_generated
    void setIs_active(bool p_is_active);
    
    //## auto_generated
    RhpString getName() const;
    
    //## auto_generated
    void setName(RhpString p_name);
    
    ////    Attributes    ////

protected :

    int id;		//## attribute id
    
    bool is_active;		//## attribute is_active
    
    RhpString name;		//## attribute name
};

//## package Default

//## class Module
template <> bool Module::get_active() {
    //#[ operation get_active()
    //#]
}

template <> bool Module::is_ok() {
    //#[ operation is_ok()
    //#]
}

template <> int Module::getId() const {
    return id;
}

template <> void Module::setId(int p_id) {
    id = p_id;
}

template <> bool Module::getIs_active() const {
    return is_active;
}

template <> void Module::setIs_active(bool p_is_active) {
    is_active = p_is_active;
}

template <> RhpString Module::getName() const {
    return name;
}

template <> void Module::setName(RhpString p_name) {
    name = p_name;
}

template <> Module::Module() {
}

template <> Module::~Module() {
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Module.h
*********************************************************************/
