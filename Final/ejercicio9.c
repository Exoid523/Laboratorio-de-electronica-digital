#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Reemplaza tabulación por >-
            putchar('>');
            putchar('\b'); // retroceso
            putchar('-');
        } else if (c == '\b') {
            // Reemplaza retroceso por <-
            putchar('<');
            putchar('\b'); // retroceso
            putchar('-');
        } else {
            putchar(c); // todos los demás caracteres se imprimen normales
        }
    }

    return 0;
}
