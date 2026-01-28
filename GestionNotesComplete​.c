/*Écrire un programme modulaire pour gérer des notes d’étudiants avec plusieurs fonctions.*/
#include <stdio.h>
#include <stdbool.h>

bool EstNoteValide(int note) {
        return (note >= 0) && (note <= 20);
}

float* SaisirNoteTableau(int nombreNotes, float notes[]){
    int indice;
    for(indice = 0; indice < nombreNotes; indice++){
        do{
            printf("Entrez la note de l'étudiant %d : ", indice + 1);
            scanf("%f", &notes[indice]);
            if (!EstNoteValide(notes[indice])){
                printf("Note invalide. Recommencez.\n");
            }
        } while(!EstNoteValide(notes[indice]));
    }
    return notes;
} 

float CalculerMoyenne(float notes[], int nombreNotes){
    float somme;
    int indice;
    somme = 0;
    for(indice = 0; indice < nombreNotes; indice++){
        somme += notes[indice];
    }
    return somme / nombreNotes;
}

float TrouverNoteMaximale(float notes[], int nombreNotes){
    float maximum = notes[0];
    int indice;
    for(indice = 1; indice < nombreNotes; indice++){
        if(notes[indice] > maximum){
            maximum = notes[indice];
        }
    }
    return maximum;
}

float TrouverNoteMinimale(float notes[], int nombreNotes){
    float minimum;
    int indice;
    minimum = notes[0];
    for(indice = 1; indice < nombreNotes; indice++){
        if(notes[indice] < minimum){
            minimum = notes[indice];
        }
    }
    return minimum;
}

int CompterNotesSuperieurSeuil(float notes[], float seuil, int nombreNotes){
    int compteur, indice;
    compteur  = 0;
    for(indice = 0; indice < nombreNotes; indice++){
        if(notes[indice] >= seuil){
            compteur += 1;
        }
    }
    return compteur;
}

int main(void){
    float notesEtudiants[20];
    int nombreEtudiants;
    float moyenne, noteMax, noteMin;
    int nombreAdmis;
    printf("Combien d'étudiants ? : ");
    scanf("%d", &nombreEtudiants);

    if((nombreEtudiants > 0) && (nombreEtudiants <= 20)){
        SaisirNoteTableau(nombreEtudiants, notesEtudiants);
        moyenne = CalculerMoyenne(notesEtudiants, nombreEtudiants);
        noteMax = TrouverNoteMaximale(notesEtudiants, nombreEtudiants);
        noteMin = TrouverNoteMinimale(notesEtudiants, nombreEtudiants);
        nombreAdmis = CompterNotesSuperieurSeuil(notesEtudiants, 10.0, nombreEtudiants);
        printf("=== Statistiques ===\n");
        printf("Moyenne de la classe: %.2f\n", moyenne);
        printf("Note maximale de la classe  : %.2f\n", noteMax);
        printf("Note minimale de la classe : %.2f\n", noteMin);
        printf("Nombre d'admis : %d\n", nombreAdmis);
    }
    else{
        printf("Nombre d'étudiants invalide\n");
    }
    return 0;
}