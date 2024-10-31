#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    printf("QUANTOS ANOS VOCE TEM?: ");
    scanf("%i", &idade);
    if (idade<18){
        printf("MENOR DE IDADE");
    }
    else{
            printf("MAIOR DE IDADE");
    }
    return 0;
}
