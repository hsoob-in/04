#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int y;
  
  printf("Input the year : ");
  scanf("%i", &y);
  
  printf("is the year %d the leap year? : %i\n", y, 
  ((y%4==0 && y%100!=0) || y%400==0));

  system("PAUSE");
  return 0;
}
