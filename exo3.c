#include "exo3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
  int i, tmp, taille_tab = atoi(argv[1]);
  srand(time(NULL));
  int *tab = NULL;
  
  tab = (int *)allocation_mem(taille_tab, sizeof(int));

  for (i = 0; i < taille_tab; i++)
    {
      tmp = rand()%122+65;
      printf("%d ", tmp);
      tab[i] = tmp;
    }

  printf("\n");
  for
    (i = 0; i < taille_tab; i++)
    {
      printf("%c ", tab[i]);
    }
  printf("\n");
  libere_mem(&tab);
}
