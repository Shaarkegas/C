#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("ENTRE UM NUMERO INTEIRO: ");
    scanf("%i", &num);
    if (num<=10 && num>=1){
        printf("NUMERO ENTRE 1 E 10");
    }
    else{
            printf("TA FORA");
    }
    return 0;
}
