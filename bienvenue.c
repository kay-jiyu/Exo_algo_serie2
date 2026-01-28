#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    // Récupération de l'heure système
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n==========================================\n");
    printf("  Salut Venkay ! Bon code sur Debian 13 \n");
    printf("  Heure de connexion : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("==========================================\n\n");

    return 0;
}