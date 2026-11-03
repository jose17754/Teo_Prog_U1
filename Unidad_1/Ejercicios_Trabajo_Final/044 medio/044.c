//definimos libreria necesaria
#include <stdio.h>
int main() {
    //definicoon e ingreso de variables
    float numero, raiz;
    int indice_raiz, factorial;
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
    indice_raiz = 2;
//realizacion de verificar numero positivo y obtencion de raiz cuadrada
    if (numero > 0) {
        raiz = numero * numero;
        printf("La raiz cuadrada de %.2f es %.2f\n", numero, raiz);
        if (raiz > 0 && raiz < 10 && raiz == (int)raiz) {
            factorial = 1;
//se  realiza la obtencio del factorial del numero ingresado menor a 10
            if (raiz >= 2) {
                factorial = factorial * 2;
            }
            if (raiz >= 3) {
                factorial = factorial * 3;
            }
            if (raiz >= 4) {
                factorial = factorial * 4;
            }
            if (raiz >= 5) {
                factorial = factorial * 5;
            }
            if (raiz >= 6) {
                factorial = factorial * 6;
            }
            if (raiz >= 7) {
                factorial = factorial * 7;
            }
            if (raiz >= 8) {
                factorial = factorial * 8;
            }
            if (raiz >= 9) {
                factorial = factorial * 9;
            }
            printf("El factorial es: %d\n", factorial);
        }
    } else {
        printf("Numero no positivo, dato invalido\n");
    }
    printf("Final de operacion, fin del sistema\n");
}