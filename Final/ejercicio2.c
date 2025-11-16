#include <stdio.h>

int main() {
    char name[30];

    // Ingresar un nombre
    printf("Ingrese un nombre: ");

    // 29 caracteres para el nombre del usuario
    scanf("%29s", name);

    //  Saludo
    printf("Hola %s\n", name);

    return 0;
}
