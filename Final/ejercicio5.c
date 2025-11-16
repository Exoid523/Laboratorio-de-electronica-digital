#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];
    int len, i;

    while (fgets(line, MAXLINE, stdin) != NULL) {
        len = strlen(line);

        // Eliminar el salto de línea final si existe
        if (len > 0 && line[len - 1] == '\n') {
            len--;
            line[len] = '\0';
        }

        // Eliminar espacios y tabulaciones al final
        while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t')) {
            len--;
            line[len] = '\0';
        }

        // Imprimir la línea si no está vacía
        if (len > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}
