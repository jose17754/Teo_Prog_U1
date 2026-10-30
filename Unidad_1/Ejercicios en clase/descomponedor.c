#include <stdio.h>

int main() {
    int a,unidad, decena, centena, suma;
    printf("Ingrese un número entero de tres dijitos: ");
    scanf("%d", &a);
    suma = 0;
    //OBTENCION DE UNIDAD
    unidad = a % 10;
    suma = unidad;
    //OBTENCION DE DECENA
    decena = (((a / 10) % 10) * 10);
    suma += decena;
    //OBTENCION DE CENTENA
    centena = (a / 100) * 100;
    suma = suma + centena;

    printf("Unidad: %d\n", unidad);
    printf("Decena: %d\n", decena);
    printf("Centena: %d\n", centena);
    printf("Suma de los dígitos: %d\n", suma);
}