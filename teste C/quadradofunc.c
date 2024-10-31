#include <stdio.h>
#include <stdlib.h>

void linha(int n){
while(n>0){
    printf("#");
    n--;
}
printf("\n");
}

void quadrado(int lado){
    int i = lado;
    while(i>0){
        linha(lado);
        i--;

    }
    printf("\n");
}

int main(){
int a = 0;
int lado = 0;
printf("insira um numero para fazer uma linha\n");
scanf("%i",&a);
linha(a);
printf("tamanho do quadrado\n");
scanf("%i",&lado);
quadrado(lado);
}
