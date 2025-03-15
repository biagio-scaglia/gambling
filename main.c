#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tokens = 10;
    char scelta;

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    printf("🎰 Benvenuto alla Gambling Machine!\n");
    printf("Hai %d gettoni. Premi INVIO per giocare o 'q' per uscire.\n", tokens);

    while (tokens > 0) {
        printf("\nVuoi giocare? (INVIO per giocare, 'q' per uscire): ");
        scelta = getchar();

        if (scelta == 'q' || scelta == 'Q') {
            printf("\nHai scelto di uscire. Gettoni rimanenti: %d\n", tokens);
            break;
        }

        getchar(); 
        tokens--; 

        int num1 = (rand() % 5) + 1;
        int num2 = (rand() % 5) + 1;
        int num3 = (rand() % 5) + 1;

        printf("\n🎰 Risultato: [%d] [%d] [%d]\n", num1, num2, num3);

        if (num1 == num2 && num2 == num3) {
            printf("🎉 Complimenti! Hai vinto 5 gettoni!\n");
            tokens += 5;
        } else {
            printf("💸 Peccato! Hai perso un gettone.\n");
        }

        printf("Gettoni rimanenti: %d\n", tokens);
    }

    printf("\n🎲 Game Over! Grazie per aver giocato.\n");
    return 0;
}
