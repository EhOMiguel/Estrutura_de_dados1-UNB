#include <stdio.h>

int main (){

    double a_price, g_price, a_perfom, g_perfom;

    scanf("%lf %lf %lf %lf", &a_price, &a_price, &g_perfom, &g_perfom);

    int a_cost = a_price*a_perfom;
    int g_cost = g_price*g_perfom;

    if(a_cost == g_cost){
        printf("%s\n", "G");
        return 0;
    }
    
    if(a_cost > g_cost){
        printf("%s\n", "G");
        return 0;
    }

        printf("%s\n", "A");

    return 0;
}
