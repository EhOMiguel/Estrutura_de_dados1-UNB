#include <stdio.h>

int main (){

    int comprimento_c, largura_c, altura_c, comprimento_n, largura_n, altura_n;

    scanf("%d %d %d %d %d %d", &comprimento_c, &largura_c, &altura_c, &comprimento_n, &largura_n, &altura_n);

    if(comprimento_c > comprimento_n || altura_c>altura_n || largura_c>largura_n){
        printf("%d\n", 0);
        return 0;
    }

    int qtd_c = (comprimento_n/comprimento_c)*(largura_n/largura_c)*(altura_n/altura_c);

    printf("%d\n", qtd_c);

    return 0;
}