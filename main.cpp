#include <iostream>

void ejercicio_1();

void ejercicio_2();

void ejercicio_3();

void ejercicio_4();

void ejercicio_5();

void ejercicio_6();

void ejercicio_7();

int main() {
    ejercicio_7();
    return 0;
}
/*
 *  Ejercicio menu
 */
void ejercicio_7() {

    int opcion;

    do {
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Opcion 3\n");
        printf("4. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Esta es la opcion 1.\n");
                break;
            case 2:
                printf("Esta es la opcion 2.\n");
                break;
            case 3:
                printf("Esta es la opcion 3.\n");
                break;
            case 4:
                break;
            default:
                break;
        }
    } while (opcion != 4);
}


/*
 *  Determinar si numero ingresado es par
 */
void ejercicio_6() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("El numero es par.");
    } else {
        printf("El numero es impar.");
    }
}

void ejercicio_5() {

    for (int i = 0; i < 128; i++) {
        printf("%03d---%c \n", i, i); // codigoascii---caracter %c significa caracter ascii
    }
}

/*
 *  Ejercicio encontrar promedio
 */
void ejercicio_4() {

    printf("Ingrese 3 numeros:\n");

    int numeros[3];
    for (int i = 0; i < 3; ++i) {
        int num;
        scanf("%d", &num);
        numeros[i] = num;
    }

    int prom;
    for (int i = 0; i < 3; ++i) {
        prom += numeros[i];
    }
    prom = prom/3;
    printf("El promedio es de: %d", prom);
}

/*
 * Ejercicio encontrar minimo
 */
void ejercicio_3() {

    printf("Ingrese 10 numeros:\n");

    int numeros[10];
    for (int i = 0; i < 10; ++i) {
        int num;
        scanf("%d", &num);
        numeros[i] = num;
    }
    int min = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }
    printf("El numero mas chico es: %d", min);
}
/*
 *  Ejercicio encontrar maximo
 */
void ejercicio_2() {

    printf("Ingrese 10 numeros:\n");

    int numeros[10];
    for (int i = 0; i < 10; ++i) {
        int num;
        scanf("%d", &num);
        numeros[i] = num;
    }
    int max = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
    printf("El numero mas grande es: %d", max);
}

/*
 *  Ejercicio imprimir nombre y edad
 */
void ejercicio_1() {
    char nombre [100];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Su nombre es: %s \nSu edad es: %d", nombre, edad);

}

