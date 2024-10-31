#include <stdio.h>
#include <stdlib.h>

int main()
{
   float v = 0;
   float menor = 0;
   printf("insira um numero flutuante para eu descobrir o menor!\n");
   scanf("%f",&v);
   menor = v;
   while(v!=0){
    if (v < menor){
        menor = v;
    }
    printf("insira outro numero flutuante!\n");
    scanf("%f",&v);
   }
   printf("%f",menor);
}
