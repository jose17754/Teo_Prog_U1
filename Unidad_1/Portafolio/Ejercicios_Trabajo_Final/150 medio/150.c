//definimos las librerias y la funcion principal
#include <stdio.h>
int main() {
    //definicion e ingreso de datos
    int DIVISOR=5;
    int y;
    float resul_div;
    printf("Ingrese un numero entero: ");
    scanf("%d", &y);
    //condicional para multiplo de 5
    //hacemos uso de ! para negar la condicion
    if (y%5==0 && y!=0) {
        printf("El numero es multiplo de 5\n");
    } else {
        printf("El numero no es multiplo de 5\n");
    }
    //hacemos la division y la mostramos con dos decimales
    resul_div=(float)y/DIVISOR;
    printf("La division es igual a: %.2f\n", resul_div);
}
