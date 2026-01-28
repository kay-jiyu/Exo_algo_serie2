/*un algorithme qui utilise plusieurs fonctions pour calculer le périmètre et l’aire d’un
cercle.*/
#include <stdio.h>
float CalculerAireCercle(float rayon){
    float aire;
    const float pi = 3.14;
    aire = pi * rayon * rayon;
    return aire;
}

float calculerPerimetreCercle(float rayon){
    float perimetre;
    const float pi = 3.14;
    perimetre = 2 * pi * rayon;
    return perimetre;
}

int main(void)
{
float rayonCercle, aireCercle, perimetreCercle ;
    printf( "Entrez le rayon du cercle : ");
    scanf("%f", &rayonCercle);

    aireCercle = CalculerAireCercle(rayonCercle);
    perimetreCercle = calculerPerimetreCercle(rayonCercle);


    printf( "Aire du cercle : %2.f\n", aireCercle);
    printf("Périmètre du cercle : %2.f\n", perimetreCercle);
    return (0);
}
