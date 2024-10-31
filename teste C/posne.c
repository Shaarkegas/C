#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("ENTRE UM NUMERO INTEIRO: \n");
    scanf("%i", &num);
    if (num == 0){
        printf("ZERO");
    }
    else{
            if (num >= 1){
                    printf("positivo");
            }
            else{
                    printf("negativo");
            }
    }
    return 0;
}
