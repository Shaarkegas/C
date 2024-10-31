#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAMANHO 120

int main (){
char palavra1[TAMANHO];
char palavra2[TAMANHO];

scanf("%9s", palavra1);
scanf("%9s", palavra2);

int ordem = strcmp(palavra1, palavra2);

if (ordem == 0){
        printf("sao palavras iguais");
}
else{
    if (ordem < 0){
    printf("%s vem antes de %s",palavra1,palavra2);
}
    else{
        printf("%s vem antes de %s",palavra2,palavra1);
    }
}
}

