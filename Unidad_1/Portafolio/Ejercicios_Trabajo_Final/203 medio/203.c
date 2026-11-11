//definimos librerias y define funcion principal
#include <stdio.h>
int main() {
    //definimos variables y solicita datos al usuario
    float TASA_CAMBIO=0.27;
    float PI=3.14;
    float soles, dolares, producto_pi;
    printf("Ingrese el monto en soles: ");
    scanf("%f", &soles);
    dolares=soles*TASA_CAMBIO;
    //condicional para ver si es mayor a cero
    if (dolares>0) {
        printf("%.2f soles son igual a %.2f dolares\n", soles, dolares);
    } else {
        printf("ERROR EL VALOR ES NEGATIVO\n");
    }
    //calcula el producto de PI y presenta datos
    producto_pi=dolares*PI;
    printf("El producto de PI con el valor en dolares es: %.2f\n", producto_pi);
}