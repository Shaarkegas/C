#include <stdio.h>
#include <stdlib.h>

void linha(int n){
while(n>0){
    printf("#");
    n--;
}
}
int main(){
int a = 0;
printf("insira um numero para fazer uma linha\n");
scanf("%i",&a);
linha(a);
}

