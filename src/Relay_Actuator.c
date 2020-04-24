#include "Relay_Actuator.h"


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Relay_Actuator__Relay_Actuation__Close_Circuit( const Relay_Actuator* Me )
{
    Me->Discrete_Pin->Set_Level(IO_LEVEL_HIGH);
}
/*----------------------------------------------------------------------------*/
void Relay_Actuator__Relay_Actuation__Open_Circuit( const Relay_Actuator* Me )
{
    Me->Discrete_Pin->Set_Level(IO_LEVEL_LOW);
}