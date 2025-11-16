#include <stdio.h>
#include <string.h>

#define MAXLINE 1000  // longitud máxima de la línea

int main(void) {
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL) {
        int len = strlen(line);

        // Eliminar el salto de línea final si existe
        if (len > 0 && line[len - 1] == '\n') {
            len--; // no contamos '\n'
        }

        if (len > 80) {
            printf("%s\n", line);
        }
    }

    return 0;
}
