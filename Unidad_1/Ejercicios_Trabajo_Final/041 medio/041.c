#include <stdio.h>

int main() {
//lectura y definicion de datos
    float GAL_LIT = 3.78;
    float PI = 3.14;
    float vol_gal, lit, res_pi;
    printf("Ingrese el valor en galones: ");
    scanf("%f", &vol_gal);
//operaciones de convercion
    lit = vol_gal * GAL_LIT;
    res_pi = lit * PI;
//Condicional y presentacion de datos
    if (lit > 0) {
        printf("%.2f galones es igual a %.2f litros\n", vol_gal, lit);
        printf("El valor en PI es: %.2f\n", res_pi);
        printf("Operación matematica multiplicacion realizada\n");
    } else {
        printf("Valor ingresado incorrecto\n");
    }
}
