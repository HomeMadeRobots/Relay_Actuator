#ifndef RELAY_ACTUATOR_H
#define RELAY_ACTUATOR_H


/* Attributes */


/* Realized interfaces */
#include "i_Relay_Actuation_Requests.h"


/* Needed interfaces */
#include "i_Discrete_Output.h"

/* Events */


class Relay_Actuator : i_Relay_Actuation_Requests {
public :
    /*--------------------------------------------------------------------------------------------*/
    /* Constructor */
	Relay_Actuator( void );
    void Connect_Ports( i_Discrete_Output* an_discrete_pin );

    /*--------------------------------------------------------------------------------------------*/
    /* Component_Type_Operations */

    /*--------------------------------------------------------------------------------------------*/
    /* Event reception points accessors */

    /*--------------------------------------------------------------------------------------------*/
    /* Provided port accessors */
    i_Relay_Actuation_Requests* Get_Port__Relay_Actuation( void );
	
	void Close_Circuit( void ) override ;
    void Open_Circuit( void ) override ;

private :
    /*--------------------------------------------------------------------------------------------*/
    /* Private attributes */

    /*--------------------------------------------------------------------------------------------*/
    /* Private methods */

    /*--------------------------------------------------------------------------------------------*/
    /* Requirer_Ports */
    i_Discrete_Output* Discrete_Pin;

    /*--------------------------------------------------------------------------------------------*/
    /* Provider ports */

    /*--------------------------------------------------------------------------------------------*/
    /* Sent events */

    /*--------------------------------------------------------------------------------------------*/
    /* Received events */
};

#endif