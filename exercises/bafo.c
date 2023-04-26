#include <stdio.h>

int main()
{

    int rounds, aldo, beto;
    int teste = 0;
    do
    {
        scanf("%d", &rounds);
        int wins_aldo=0, wins_beto=0;
        if (rounds != 0)
        {
            teste++;
            for (int i = 1; i <= rounds; i++)
            {

                scanf("%d", &aldo);
                scanf("%d", &beto);

                wins_aldo = aldo + wins_aldo;
                wins_beto = beto + wins_beto;

                    if (i == rounds)
                {
                    printf("Teste %d\n", teste);
                    if (wins_aldo > wins_beto)
                    {
                        printf("Aldo\n");
                    }
                    else
                    {
                        printf("Beto\n");
                    }
                }
            }
        }
    } while (rounds != 0);

    return 0;
}