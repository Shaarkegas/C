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

    printf("Antes da conversão: %s\n", stringm);

    converterParaMaiusculas(stringm);

    printf("Depois da conversão: %s\n", stringm);

    return 0;
}
