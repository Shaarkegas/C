#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("insira um inteiro\n");
    scanf("%i",&a);
    printf("insira outro inteiro\n");
    scanf("%i",&b);
    if (a < b){
        while(a<=b){
            printf("%i\n",a);
            a+=1;
        }
    }
    else{
      while(a>=b){
            printf("%i\n",a);
            a-=1;
    }
}
}
