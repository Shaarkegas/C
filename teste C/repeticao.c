#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v = 0;
   int produto = 1;
   printf("insira um numero inteiro\n");
   scanf("%i",&v);
   while(v!=0){
    produto = produto*v;
    printf("insira outro numero inteiro\n");
    scanf("%i",&v);
   }
   printf("%i",produto);
}
