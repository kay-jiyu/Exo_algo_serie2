/*Écrire une fonction qui teste si un nombre est premier, puis un algorithme qui affiche tous
les nombres premiers inférieurs à un nombre donné*/

#include <stdio.h>
#include <stdbool.h>
bool EstNombrePremier(int nombre ){
    int diviseur;
    if(nombre <= 1){
        return false ;
    }
    if(nombre <= 1){
        return true;
    }
    if(nombre % 2 == 0 ){
        return false;
    }
    for(diviseur = 3; diviseur <= nombre -1; diviseur += 2){
        if(nombre % diviseur == 0){
            return false;
        }
    }
    return true;
}
int main(void){
    int limite, nombre, compteur;
    printf("Entrez la limite : ");
    scanf("%d", &limite);
    printf("Nombres premiers inférieurs à %d : " , limite);
    compteur = 0 ;
    for(nombre = 2; nombre <= limite; nombre++){
        if(EstNombrePremier(nombre) ){
            printf("%d ", nombre);
            compteur = compteur + 1 ;
        }
    }
    printf("\nTotal : %d nombres premiers trouvés\n", compteur);
}