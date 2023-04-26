#include <stdio.h>

int main (){

    int a, b, c;

    scanf("%d %d %d", &a, &b,&c);
    
    if(a==b && a==c){
        printf("%s\n", "empate");
        return 0;
    }

    if(a!=b && a!=c){
        printf("%s\n", "A");
        return 0;
    }

    if(a!=b && b!=c){
        printf("%s\n", "B");
        return 0;
    }

    printf("%s\n", "C");


    return 0;
}