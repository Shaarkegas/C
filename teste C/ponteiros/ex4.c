#include <stdio.h>

void converterParaMaiusculas(char *string) {
    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z') {
            *string = *string - ('a' - 'A');
        }
        string++;
    }
}

int main() {
    char stringm[] = "Exemplo de String";

    printf("Antes da convers�o: %s\n", stringm);

    converterParaMaiusculas(stringm);

    printf("Depois da convers�o: %s\n", stringm);

    return 0;
}
