#include <stdio.h>
#include <stdlib.h>

int main()
{
  int soma = 0;
  int c = 3;
  while (c <=99){
      soma = soma+c;
        printf("%i\n",soma);
      c += 3;
  }
  printf("%i",soma);
}
