#ifndef CCF2_H_
#define CCF2_H_

#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

int                  g_quai[4];
char                 *g_meteo[3];
char                 *g_dest[5];
t_truck              g_truck[50];
pthread_mutex_t 	    g_a_dest;
pthread_mutex_t 	    g_a_meteo;
pthread_mutex_t 	    g_a_poids;

void    init_quai();

void    init_dest();

void    init_resources();

void    init_meteo();


#endif /* !CCF2_H_ */
