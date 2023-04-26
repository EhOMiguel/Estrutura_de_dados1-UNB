#include <stdio.h>

int main (){

    int c1, c2, c3, c4, c5;
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
    
    switch (c1/c2){
    case 0:
        //descrescente

        if(c3>c2){
            if(c4>c3){
                if(c5>c4){
                    printf("%s\n", "C");
                    return 0;
                }
            }
        }
        printf("%s\n", "N");

        break;
    
    default:
        if(c3<c2){
            if(c4<c3){
                if(c5<c4){
                    printf("%s\n", "D");
                    return 0;
                }
            }
        }
        printf("%s\n", "N");
        break;
    }

    return 0;
}