/*Écrire une fonction qui valide qu’une note est comprise entre 0 et 20, puis un algorithme
qui utilise cette fonction.*/
#include <stdio.h>
#include <stdbool.h>
bool EstNoteValide(int note){
    return (note >= 0) & (note <= 20);
}
int SaisirNoteValide(){
    int note;
    do{
        printf("Entrez une note (entre 0 et 20) : ");
        scanf("%d", &note);
        if (!EstNoteValide(note)){
            printf("Erreur : la note doit être entre 0 et 20\n");
        }
    } while(EstNoteValide(note));
    return note;
} 
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
int main(void)
{
float notes[5];
int indice;
float moynotes;

    for(indice = 1; indice <= 5; indice++){
        printf("Note de l'étudiant ", indice);
        notes[indice] = SaisirNoteValide();
    }
    moynotes = CalculerMoyenneTableau(notes, 5);
    printf("Moyenne de la classe : %.2f\n", moynotes);

    return (0);
}
