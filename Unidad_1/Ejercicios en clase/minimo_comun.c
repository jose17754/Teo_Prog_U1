#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, residuo, cociente,ecuacion;
    
    //PASO 1
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    cociente = num1 / num2;
    residuo = num1 % num2;

    if (residuo == 0) {
        printf("El numero %d es el maximo comun divisor\n", num2);
        exit(0);
    }
    ecuacion = (cociente * num2) + residuo;
    printf("el resutado primera ecuacion es : %d\n", ecuacion);
    
    num1 = num2;
    num2 = residuo;


    //PASO 2

    cociente = num1 / num2;
    residuo = num1 % num2;

    ecuacion = (cociente * num2) + residuo;
    printf("el resutado segunda ecuacion es : %d\n", ecuacion);
    


    if (residuo == 0) {
        printf("El numero %d es el maximo comun divisor\n", num2);
        exit(0);
    }

    num1 = num2;
    num2 = residuo;

    //PASO 3

    cociente = num1 / num2;
    residuo = num1 % num2;

    ecuacion = (cociente * num2) + residuo;
    printf("el resutado tercera ecuacion es : %d\n", ecuacion);

    printf("El numero que buscas es el %d\n", num2);

    if (residuo == 0) {
        printf("El numero %d es el maximo comun divisor\n", num2);
        exit(0);
    }

}