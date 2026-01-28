/*Écrire une fonction qui calcule le Plus Grand Commun Diviseur de deux nombres en
utilisant l’algorithme d’Euclide.*/
#include <stdio.h>

int CalculerPGCD(int nbr1, int nbr2){
    int a, b, reste;
    a = nbr1;
    b = nbr2;

    while(b != 0){
        reste = a % b;
        a = b;
        b = reste;
    }
    return a ;
}


int main(void)
{
    int premier, deuxieme, pgcd ;
        printf("Entrez le premier nombre : ");
        scanf("%d", &premier);
        printf("Entrez le deuxième nombre : ");
        scanf("%d", &deuxieme);

        pgcd = CalculerPGCD(premier, deuxieme);
        printf("Le PGCD de %d et %d est : %d\n", premier, deuxieme, pgcd);
    return(0);
}

