#include "ccf2.h"
/*
void    init_colors()
{
    g_truck[0].color = "33";
    g_truck[1].color = "31";
    g_truck[2].color = "34";
    g_truck[3].color = "35";
    g_truck[4].color = "36";
    g_truck[5].color = "32";
    g_truck[6].color = "30";
}*/

void    init_quai()
{
    int x = -1;
    
    while(++x < 4)
        g_quai[x] = 0;
}

void    init_dest()
{
    g_dest[0]=malloc(sizeof(char)*5);
    strcpy(g_dest[0], "PARIS");
    
    g_dest[1]=malloc(sizeof(char)*5);
    strcpy(g_dest[1], "NANCY");
    
    g_dest[2]=malloc(sizeof(char)*5);
    strcpy(g_dest[2], "NIMES");
    
    g_dest[3]=malloc(sizeof(char)*6);
    strcpy(g_dest[3], "BERLIN");
    
    g_dest[4]=malloc(sizeof(char)*5);
    strcpy(g_dest[4], "GRECE");
}

void    init_meteo()
{
    g_meteo[0]=malloc(sizeof(char)*5);
    strcpy(g_meteo[0], "NEIGE");
    
    g_meteo[1]=malloc(sizeof(char)*6);
    strcpy(g_meteo[1], "SOLEIL");
    
    g_meteo[2]=malloc(sizeof(char)*5);
    strcpy(g_meteo[2], "PLUIE");
}

void        init_resources()
{
    init_dest();
    init_quai();
    init_meteo();
  int       i;

  i = -1;
  //init_colors();
  while (++i < 50)
  {
    g_truck[i].state = 0;
    g_truck[i].number = i;
    g_truck[i].colis = 10 + rand() % 50;
    //pthread_create(&(g_truck[i].handler), NULL, set_brain, &g_truck[i]);
  }
}

// void 		print_states_history()
// {
// 	int 	i;
// 
// 	fprintf(stdout, "\n\nResult : \n\n");
// 	i = 0;
// 	while (i < 7)
// 	{
// 		g_truck[i].states[g_truck[i].st_i] = 0;
// 		printf("\e[1;%smPhilosopher %d : [%s]\e[m\n", g_truck[i].color, i, g_truck[i].states);
// 		++i;
// 	}
// }
// 
// void        wait_for()
// {
//   int     i;
// 
//   i = 0;
//   while (i < 50)
//   {
//     pthread_join(g_truck[i].handler), NULL);
//     i = i + 1;
//   }
// }
