#include<stdio.h>
#include<stdlib.h>


int main() {
int *p_i = malloc(10 * sizeof(int));
for (int c = 0; c < 10; c++) {
p_i[c] = 0;
}
}
