#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned int x; //0혹은 양수  
  int b;
  
  printf("Input a number : ");
  scanf("%ui", &x);
  
  for (b=0; x!=0; x>>=1)
  {
      if (x&1)
      {
              b++;
      }
  }
   
  printf("the result is : %i\n", b);

  system("PAUSE");
  return 0;
}
