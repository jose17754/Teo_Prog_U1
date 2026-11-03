//llaam a librerias y define funcion principals
#include <stdio.h>
int main() {
    //define variables y solicita datos al usuario
    int z, s, val1;
    float promedio, cubo;
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);
    printf("Ingrese el valor de s: ");
    scanf("%d", &s);
    printf("Ingrese el valor de val1: ");
    scanf("%d", &val1);
    promedio=(z+s+val1)/3.0;
    //condional para ver si es mayor a cero
    if (promedio>0) {
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("Error, el promedio es negativo\n");
    }
    //calcula el cubo y presenta datos
    cubo=promedio*promedio*promedio;
    printf("El elevado al cubo es: %.2f\n", cubo);
}