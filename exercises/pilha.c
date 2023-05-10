#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 501

typedef struct
{
    int array[MAX];
    int top;
} Pilha;

void empilhar(Pilha *p, int c)
{
    p->top++;
    p->array[p->top] = c;
}

void desempilhar(Pilha *p)
{
    while (p->top != -1)
    {
        printf("%c", p->array[p->top]);
        p->top--;
    }
}

int main()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p == NULL)
    {
        printf("Erro: não foi possível alocar memória\n");
        exit(1);
    }
    p->top = -1;
    char texto[500];
    scanf("%s", texto);

    for (int i = 0; i < strlen(texto); i++)
    {
        empilhar(p, texto[i]);
    }
    for (int i = 0; i < strlen(texto); i++)
    {
        desempilhar(p);
    }
    // puts("\n");
    free(p);
    return 0;
}
