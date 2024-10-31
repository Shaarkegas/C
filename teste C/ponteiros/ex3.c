#include <stdio.h>
#include <stdlib.h>

void ordenaVet(int v[2]){
if (v[0] > v[1]) {
int temp = v[0];
v[0] = v[1];
v[1] = temp;
}
}

int main(){
int v[2] = {1,0};
printf("%i, %i \n",v[0], v[1]);
ordenaVet(v);
printf("%i, %i \n",v[0], v[1]);
return 0;
}
