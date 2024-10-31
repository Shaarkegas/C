#include <stdio.h>
#include <stdlib.h>

void foo(int *a){
(*a)++;
printf("Foo - a = %i \n",(*a));
}


int main(){
int a = 1;
printf("Main - a = %i \n",a);
foo(&a);
return 0;
}
