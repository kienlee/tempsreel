#ifndef CCF2_H_
#define CCF2_H_

#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct      s_truck
{
    int 	    number;
    pthread_t       handler;
    int             state;
    int             colis;
    char            *destination;
    char            *meteo;
    int             poids;
}                   t_truck;


#endif /* !CCF2_H_ */
