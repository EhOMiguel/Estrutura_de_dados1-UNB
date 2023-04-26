#include <stdio.h>

int main()
{

    int quantity, rest;

    scanf("%d", &quantity);

        for (int i = 1; i <= quantity; i++)
        {
            rest = i%2;

            if(rest!=0){
                printf("THUMS THUMS THUMS\n");
            }else{
                printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
            }

        }
    return 0;
}