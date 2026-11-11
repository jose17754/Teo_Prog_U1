#include <stdio.h>
int main() {
//desigfancion de variables y lecrura de datos
    float peso, altura, IMC, IMC_cuadrado;
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
//calculos de IMC y cuadrado
    IMC = peso / (altura * altura);
    IMC_cuadrado = IMC * IMC;
//presenta IMC
    printf("El IMC es: %.2f\n", IMC);
//condicional
    if (IMC < 18.5) {
        printf("IMC bajo del rango normal\n");
    } else {
        if (IMC > 25.0) {
            printf("IMC sobre el rango normal\n");
        }
    }
//presentaci de variables
    printf("Cuadrado del IMC: %.2f \n", IMC_cuadrado);
    printf("Presentacion de variables auxiliares \n");
    printf("Peso: %.2f\n ", peso);
    printf("Altura: %.2f\n ", altura);
    printf("IMC: %.2f\n", IMC);
}