//definion de libreria y funcion principal
#include <stdio.h>
int main() {
    //definion y solicitud de varaibles
    float BAJO = 18.5;
    float NORMAL = 25.0;
    float ALTO = 30.0;
    float peso, altura, IMC, IMC_potencia_4;
    char *categoria;
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
//if sobre el imc y su grado de peso
    if (peso > 0 && altura > 0) {
        IMC = peso / (altura * altura);

        IMC_potencia_4 = IMC * IMC * IMC * IMC;
        if (IMC < BAJO) {
            categoria = "Bajo peso";
        } else {
            if (IMC < NORMAL) {
                categoria = "Normal";
            } else {
                if (IMC < ALTO) {
                    categoria = "Sobrepeso";
                } else {
                    categoria = "Obesidad";
                }
            }
        }
        printf("IMC es: %.2f\n", IMC);
        printf("Categoria: %s\n", categoria);
        printf("IMC elevado a 4 es: %.2f\n", IMC_potencia_4);

    } else {
        printf("Error, peso o altura no validos\n");
    }
    //explicaion de la funcion del sistema
    printf("Este algoritmo solicita datos para calcular el IMC y su elevacion a 4,\n al final da un mensaje del estado de la persona\n");
    printf("Final de operacion, fin del sistema");
}