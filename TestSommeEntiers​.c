// une fonction qui calcule la somme des n premiers entiers.

#include <stdio.h>


int CalculerSommeEntiers(int nombreEntiers){
    int somme, compteur;
    somme = 0;
    for(compteur = 1; compteur<=nombreEntiers; compteur++){
        somme += compteur;
    }
    return somme;
}

int main(void)
{
int n, resultat;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    resultat = CalculerSommeEntiers(n);
    printf("La somme des %d premiers entiers est : %d\n", n, resultat);
    return (0);
}

