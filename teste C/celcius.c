# define MAX 100
typedef struct {
    int ini;
    int fim;
    int vetor[MAX];
} Tipo1;

void proc1 (Tipo1 * t, int a, int b)
{
    int i;
    if ( (t->ini == 0 && t->fim == MAX-1) ||(a > t->fim - t->ini + 2 ) ||(a < 1) ||(t->ini == -1 && a != 1 ))
        printf("erro");
    else if (t->ini == -1)
    {
        t->ini = 0;
        t->fim = 0;
    }
    else if (t->fim != MAX-1)
    {
        for (i=t->fim; i >= t->ini + a - 1; i--)
        t->vetor[i+1] = t->vetor[i];
        t->fim = t->fim + 1;
    }
    else
    {
        for (i=t->ini; i <= t->ini + a - 1; i++)
        t->vetor[i-1] = t->vetor[i];
        t->ini = t->ini - 1;
    }
    t->vetor[t->ini + a - 1] = b;
}

int main()
{
    // Declarar e inicializar a variável var
    Tipo1 var;
    var.ini = -1;  // Inicializar ini para -1, conforme o código
    var.fim = -1;  // Inicializar fim para -1, conforme o código

    // Chamar a função proc1 com a variável var
    proc1(&var, 2, 7);
    proc1(&var, 8, 25);
    proc1(&var, 4, 10);

    return 0;
}
