#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp = 0;
    int lar = 0;
    printf("ENTRE UM COMPRIMENTO: \n");
    scanf("%i", &comp);
    printf("ENTRE UMA LARGURA: \n");
    scanf("%i", &lar);
    if (comp == lar){
        printf("QUADRADO");
    }
    else{
            printf("RETANGULO");
    }
    return 0;
}
