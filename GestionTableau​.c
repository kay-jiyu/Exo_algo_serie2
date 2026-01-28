/*Écrire des fonctions pour calculer la moyenne d’un tableau et afficher les éléments
supérieurs à la moyenne*/

#include <stdio.h>
float CalculerMoyenneTableau(float tableau[], int taille ){
    float somme, moyenne;
    int indice;

    somme = 0;
    for(indice = 1; indice <= taille; indice++){
        somme += tableau[indice];
    }
    moyenne = somme / taille;
    return(moyenne);
}

int CompterSuperieursMoyenne(float tableau[], int taille, float moyenne){
    int compteur, indice;
    compteur = 0;
    for(indice = 1; indice <= taille; indice++){
        if(tableau[indice] > moyenne){
            compteur += 1 ;
        }
    }
    return(compteur);
}

int main(void)
{
    float valeurs[10];
    float moyenneValeurs;
    int nbreSupMoy ;
    int i;

    for(i=1; i<=10; i++){
        printf("Entrez la valeur %d : ",i);
        scanf("%d", &i);
    }

    moyenneValeurs = CalculerMoyenneTableau(valeurs, 10);
    printf("Moyenne : ");
    nbreSupMoy = CompterSuperieursMoyenne(valeurs, 10, moyenneValeurs);

    printf("Éléments supérieurs à la moyenne : ");
    for(i=1; i<=10; i++){
        if(valeurs[i] > moyenneValeurs){
            printf("%f\n", valeurs[i]);
        }
    }
    return (0);
}