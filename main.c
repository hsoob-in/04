#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int s;
  
  printf("Input the second : ");
  scanf("%i", &s);
  
  printf("The time is %d : %d\n", s/60, s%60);

  system("PAUSE");
  return 0;
}
