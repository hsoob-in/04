#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int s; 
  
  printf("Input the second : ");
  scanf("%i", &s);
  
  printf("the time for %d second is %d : %d : %d \n", 
  s, (s/60)/60, (s/60)%60, s%60);

  system("PAUSE");
  return 0;
}
