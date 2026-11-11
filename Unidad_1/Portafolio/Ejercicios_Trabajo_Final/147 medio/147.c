//definicion de libreri y funcion principal
#include <stdio.h>
int main() {
    //defnicion de variables y ingreso de datos
    float y, cuadrado, promedio, diferencia;
    printf("Se utilizaran cuatro variables estas son: y, cuadrado, promedio, diferencia\n");
    printf("Ingrese el valor de y: ");
    scanf("%f", &y);
    //calculo de cuadrado
    cuadrado = y * y;
    //condicional requerida
    if (cuadrado >= 0) {
        printf("El cuadrado de %.2f es %.2f\n", y, cuadrado);
    }
    //calculo de promedio y diferencia
    promedio = (y + cuadrado) / 2;
    diferencia=cuadrado-promedio;
    //presenta datos
    printf("Promedio: %.2f\n",promedio);
    printf("Diferencia: %.2f\n",diferencia);
}