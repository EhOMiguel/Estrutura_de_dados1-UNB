#include <stdio.h>

int main()
{

    int scanner, capacity, enter, exit, lotation=0, pass=0;

    scanf("%d %d", &scanner, &capacity);

        for (int i = 1; i <= scanner; i++)
        {

            scanf("%d", &exit);
            scanf("%d", &enter);
            
            lotation = lotation + enter - exit;

            if(lotation>capacity){
                pass = 1;
            }

        }
        if(pass==0){
            printf("N\n");
        }else{
            printf("S\n");
        }
    

    return 0;
}