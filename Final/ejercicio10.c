#include <stdio.h>

#define MAXWORD 20  // longitud máxima de palabra a considerar

int main(void) {
    int c, i;
    int word_length = 0;
    int lengths[MAXWORD + 1] = {0};  // contador de palabras de longitud 1..MAXWORD

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (word_length > 0) {
                if (word_length > MAXWORD)
                    word_length = MAXWORD; // agrupar palabras muy largas
                lengths[word_length]++;
                word_length = 0;
            }
        } else {
            word_length++;
        }
    }

    // Si el último carácter no era blanco, contar la última palabra
    if (word_length > 0) {
        if (word_length > MAXWORD)
            word_length = MAXWORD;
        lengths[word_length]++;
    }

    // Imprimir histograma horizontal
    printf("Histograma de longitudes de palabras:\n");
    for (i = 1; i <= MAXWORD; i++) {
        if (lengths[i] > 0) {
            printf("%2d: ", i);
            for (int j = 0; j < lengths[i]; j++) {
                putchar('*');
            }
            printf("\n");
        }
    }

    return 0;
}
