#include <stdio.h>
#include <stdlib.h>

int main () {

int x_saida, y_saida;
int x_chegada, y_chegada;

scanf("%d %d", &x_saida, &y_saida);
scanf("%d %d", &x_chegada, &y_chegada);

int n_cruzamentos = abs((x_saida - x_chegada)) + abs((y_saida - y_chegada));


printf("%d\n", n_cruzamentos);



    return 0;
}