#ifndef RELAY_ACTUATOR_H
#define RELAY_ACTUATOR_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Realized interfaces */
#include "Relay_Actuation_Requests.h"


/* Required interfaces */
#include "Discrete_Output.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Required interfaces */
    const Discrete_Output* Discrete_Pin;

} Relay_Actuator;


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Relay_Actuator__Relay_Actuation__Close_Circuit( const Relay_Actuator* Me );
void Relay_Actuator__Relay_Actuation__Open_Circuit( const Relay_Actuator* Me );

#endif