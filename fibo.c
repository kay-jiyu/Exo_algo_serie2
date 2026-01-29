#include <stdio.h>

int main(void)
{
    int nbr_terme;
    int terme1 = 0;
    int terme2 = 1;
    int new_terme;
    int i;

    printf("Veuillez entrer le nombre de terme que vous désirez : ");
    scanf("%d", &nbr_terme);
    printf("La suite est telle que : ");

    for (i = 0; i < nbr_terme; i++)
    {
        printf("%d\n ", terme1);
        new_terme = terme1 + terme2;
        terme2 = terme1;
        terme1 = new_terme;
    }

    return(0);
}

