#include <stdio.h>
#include <stdlib.h>

void change (int var)
{
  var = 5;
}

void change2 (int *var)
{
  *var = 5;
}

int main()
{
  int test = 18;
  printf("test avant modif (1) : %d \n", test);

  change(test);
  
  printf("test après modif (1) : %d \n", test);

  printf("test avant modif (2) : %d \n", test);

  change2(&test);
  
  printf("test après modif (2) : %d \n", test);
}
