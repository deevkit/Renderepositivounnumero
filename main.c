#include <stdio.h>

int main() {

    // Dichiarazione delle variabili
    int A;

    // INPUT
    printf("Inserisci un numero: ");
    scanf("%d", &A);

    // CONTROLLO E CALCOLO
    if (A <= 0) {
        A = -A;
    }

    // OUTPUT
    printf("Il valore di A = %d\n", A);

    return 0;
}