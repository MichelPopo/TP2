#include "exo4.h"
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
  int taille_tab = atoi(argv[1]), i;
  int **tab = NULL;
  
  tab = (int **)allocation_mem(taille_tab, sizeof(int*));
  for (i = 1; i < taille_tab; i++)
    {
      tab[i] = (int *)allocation_mem(i, sizeof(int));
    }


  for (i = 1; i < taille_tab; i++)
    {
      libere_mem(&tab[i]);
    }
  
  libere_mem(&tab);
}
