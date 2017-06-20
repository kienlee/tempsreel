#include "ccf2.h"

pthread_mutex_t 	    g_a_dest = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t 	    g_a_meteo = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t 	    g_a_poids = PTHREAD_MUTEX_INITIALIZER;

int         main()
{
  srand(time(NULL));
  init_resources();
  //wait_for();
  //print_states_history();
  return (0);
}