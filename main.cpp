#include <iostream>

void ejercicio_1();

int main() {
    ejercicio_1();
    return 0;
}

void ejercicio_1() {
    char nombre [100];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Su nombre es: %s \nSu edad es: %d", nombre, edad);

}
