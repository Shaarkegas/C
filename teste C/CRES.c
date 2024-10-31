#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int num2 = 0;
    printf("ENTRE UM NUMERO INTEIRO: \n");
    scanf("%i", &num);
    printf("ENTRE OUTRO NUMERO INTEIRO: \n");
    scanf("%i", &num2);
    if (num == num2){
        printf("IGUAIS");
    }
    else{
            if (num > num2){
                    printf("%i, %i",num,num2);
            }
            else{
                    printf("%i, %i",num2,num);
            }
    }
    return 0;
}
