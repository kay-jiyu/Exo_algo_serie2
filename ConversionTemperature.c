//Écrire des fonctions pour convertir les températures entre Celsius et Fahrenheit.
#include <stdio.h>

float  CelsiusVersFahrenheit(float celsius){
    float fahrenheit ;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

float FahrenheitVersCelsius(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main(void){
    float temperature, temperatureConvertie;
    int choix;

    printf("Choisissez la conversion \n 1. Celsius vers Fahrenheit\n2. Fahrenheit vers Celsius\n");
    scanf("%d", &choix);

    if (choix = 1){
        printf("Entrez la température en Celsius : ");
        scanf("%f", &temperature);
        temperatureConvertie = CelsiusVersFahrenheit(temperature);
        printf("%f°C = %f°\n", temperature, temperatureConvertie);
    }
    else if(choix = 2){
        printf("Entrez la température en Fahrenheit : ");
        scanf("%f", &temperature);
        temperatureConvertie = FahrenheitVersCelsius(temperature);
        printf("%f°F = %f°C \n", temperature, temperatureConvertie);
}
    else{printf("choix invalide");}

return (0);
}