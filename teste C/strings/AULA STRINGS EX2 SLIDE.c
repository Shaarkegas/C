#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAMANHO 120

int main(){
char frase[TAMANHO] = "o rato roeu a roupa do rei de roma";
int palavras = 1;
for(int i=0; frase[i] != '\0'; i++){
    if(frase[i] == ' '){
     palavras++;
    }
}
printf("%i",palavras);
}

