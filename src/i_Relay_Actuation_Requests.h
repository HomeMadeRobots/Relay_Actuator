#ifndef I_RELAY_ACTUATION_REQUESTS_H
#define I_RELAY_ACTUATION_REQUESTS_H

/* Client_Server_Interface */
/* i_Relay_Actuation_Requests defines operations allowing to manage a relay. */
class i_Relay_Actuation_Requests {
public :
    /* Synchronous_Operation */
    /*  */
    virtual void Close_Circuit( void ) = 0 ;
    /*  */
    virtual void Open_Circuit( void ) = 0 ;
};

#endif