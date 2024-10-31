#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produtos = 333;
    int sobras = produtos%12;
    int caixas = (produtos/12);
    printf("%i caixas e %i produtos sobraram",caixas,sobras);
    return 0;
}
