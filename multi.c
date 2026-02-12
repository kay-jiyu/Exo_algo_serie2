#include <stdio.h>

void tableDeMultiplication(int nbr)
{
    for (int i = 0; i <= 12; i++)
    {
        printf("\n            %d * %d = %d", nbr, i, nbr * i);
    }
}

int main(void)
{
    int nbr;
    char choix;

    do
    {
        printf("\n\n----------Veuillez entrer le nombre dont vous souhaiter afficher la table de multiplication---------\n Le nombre est : ");
        scanf("%d", &nbr);

        tableDeMultiplication(nbr);
        printf("\n\n");

        printf("\nVoulez-vous afficher la table de multiplication d'un autre nombre ? (O/n) : ");
        scanf(" %c", &choix);

    } while (choix == 'O');

    return 0;
}
