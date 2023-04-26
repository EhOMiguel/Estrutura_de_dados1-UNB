#include <stdio.h>

int main () {

int estrada_comp, ped_dist;
int custo_perKM, ped_valor;

scanf("%d %d", &estrada_comp, &ped_dist);
scanf("%d %d", &custo_perKM, &ped_valor);

int qtd_ped = estrada_comp/ped_dist;
int real_ped = qtd_ped * ped_valor;
int real_gasolina = custo_perKM * estrada_comp;



printf("%d\n", real_gasolina+real_ped);



    return 0;
}