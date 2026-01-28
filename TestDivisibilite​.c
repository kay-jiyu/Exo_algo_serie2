//une fonction qui détermine si un nombre est divisible par un autre.

#include <stdio.h>
#include <stdbool.h>

bool EstDivisible(int dividende, int diviseur)
    {
    if (diviseur == 0){
        return false; // La division par zéro n'est pas définie
    }
            return (dividende % diviseur == 0);
    }


int main(void)
{
    int nb1, nb2;
    printf("Entrez le premier nombre : ");
    scanf("%d", &nb1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nb2);

    if (EstDivisible(nb1, nb2)) {
        printf("%d est divisible par %d.\n", nb1, nb2);
    } 
    else {
        printf("%d n'est pas divisible par %d.\n", nb1, nb2);
    }

    return (0);
}
