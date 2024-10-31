#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("INSIRA UM ANGULO DE VALOR INTEIRO ");
    scanf("%i",&a);
    printf("INSIRA OUTRO ANGULO ");
    scanf("%i",&b);
    int soman = (a+b);
    if (soman >= 360)
        {
        soman = soman%360;
        printf("%i",soman);
        }
    else{
        printf("%i",soman);
        }

}
