//definicon de galeria para lactura y presentacion
#include <stdio.h>
int main() {
    //ingreso y definion de variables
    int c, triple;
    printf("Ingrese un numero: ");
    scanf("%d", &c);
//primer if con dos condiciones
    if (c % 2 == 0 && c > 0) {
        printf("El numero es par y positivo\n");
    } else {
        printf("Error el numero no es: par-positivo\n");
    }
    //segundo if verifica numero positivo
    if (c > 0) {
        triple = c * 3;
        printf("El triple del numero es: %d\n", triple);
    } else {
        printf("Error numero negativo\n");
    }
    printf("Final de operacion, fin del sistema\n");
}