#include <stdio.h>

/* Tabla completa de conversion Celsius-Fahrenheit
   para c = -50, -45, ..., 100 */

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    lower = -50;  /* límite inferior de la tabla */
    upper = 100;  /* límite superior */
    step = 5;     /* incremento */
    celsius = lower;

    // Título de la tabla
    printf("Tabla de conversion Celsius-Fahrenheit\n");
    printf("%8s %12s\n", "Celsius", "Fahrenheit"); // encabezados

    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0; // fórmula de conversión
        printf("%8.1f %12.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
