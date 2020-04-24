#ifndef RELAY_ACTUATION_REQUESTS_H
#define RELAY_ACTUATION_REQUESTS_H

/* Client_Server_Interface */
typedef struct {
    void (*Close_Circuit) ( void );
    void (*Open_Circuit) ( void );
} Relay_Actuation_Requests;

#endif