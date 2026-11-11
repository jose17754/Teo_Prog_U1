//ingreso de librerias y funcion principal
#include <stdio.h>
int main() {
    //definicon de variables y solicitud de datos al usuario
    int n, resul_1, resul_2;
    int es_par_positivo, diferencia_absoluta;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("Ingrese el primer resultado: ");
    scanf("%d", &resul_1);
    printf("Ingrese el segundo resultado: ");
    scanf("%d", &resul_2);
    //uso de una variable para guardar la condicion
    es_par_positivo=(n>0 && n%2==0);
    //se ingresa la variable en el if
    if (es_par_positivo) {
        printf("El numero es par y positivo\n");
    } else {
        printf("ERROR EL NUMERO NO CUMPLE LAS CONDICIONES\n");
    }
    //se obtiene la diferencia absoluta y se verifica o comvierte en positivo
    diferencia_absoluta=resul_1-resul_2;
    if (diferencia_absoluta<0) {
        diferencia_absoluta=diferencia_absoluta*(-1);
    }
    printf("Diferencia absoluta=%d\n", diferencia_absoluta);
}