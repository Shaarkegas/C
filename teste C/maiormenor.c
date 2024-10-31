#include <stdio.h>
#include <stdlib.h>

int main(){
int num = 0;
int maior = 0;
int c = 1;
printf("insira 10 numeros inteiros, um de cada vez\n");
scanf("%i",&num);
int menor = num;
while(c<10){
    if(num>maior){
        maior = num;
    }
    if(num<menor){
        menor = num;
    }
    c += 1;
    scanf("%i",&num);
}
printf("%i eh o maior\n",maior);
printf("%i eh o menor\n",menor);
}
