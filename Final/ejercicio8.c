#include <stdio.h>

int main(void) {
    int c;
    int prev_space = 0;  // indica si el carácter anterior era un espacio

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (!prev_space) {
                putchar(' '); // imprime un solo espacio
                prev_space = 1;
            }
            // si ya había un espacio previo, no hacemos nada
        } else {
            putchar(c);
            prev_space = 0; // reseteamos indicador
        }
    }

    return 0;
}
