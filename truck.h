#ifndef PHILOSHOPERS_H_
# define PHILOSHOPERS_H_

#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct      s_truck
{
    int 	        i;
    pthread_t       handler;
    char            state;
    int             time_to_think;
    int             time_to_eat;
    int             time_to_rest;
    char            *name;
    int             rice;
    int             hunger;
    char            *color;
    char 	        states[512];
    int 	        st_i;
}                   t_truck;

extern int       	 	        g_chopsticks[7];
extern t_truck           g_dudes[7];
extern pthread_mutex_t 	    g_choose;

void    init_resources(void);
void    wait_for(void);
void    *set_brain(void *arg);
void 	truck_relax(t_truck *p);
void 	truck_thinking(t_truck *p);
void 	truck_eating(t_truck *p);
void    init_colors(void);
void    init_resources(void);
void 	print_states_history(void);

#endif /* !PHILOSHOPERS_H_ */
