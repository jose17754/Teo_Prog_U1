#include <stdio.h>

int main(){

//SE DECLARA LAS VARIABLE A USAR

    float MBIT_A_MBYTE = 0.125;
    float FACTOR_FIBRA = 1.0;
    float FACTOR_CABLE = 0.9;
    float FACTOR_MOVIL = 0.7;
    float tamano, velocidad, factor;
    float tiempo, descuento, tiempo_final;
    char red;
    int positivo;

//PROCESOS INTERNOS
    printf("---------------------------------\n");
    printf("SISTEMA DE DESCARGA DE ARCHIVOS\n");
    printf("---------------------------------\n");

//LEER DATOS
    printf("Ingrese el tamano del archivo en MB: ");
    scanf("%f", &tamano);

    printf("Ingrese la velocidad de conexion en Mbps: ");
    scanf("%f", &velocidad);

    printf("Ingrese el tipo de red (F-Fibra, C-Cable, M-Movil): ");
    scanf(" %c", &red);

//PREGUNTAS
    if (red == 'F') {
        factor = FACTOR_FIBRA;
    } else if (red == 'C') {
        factor = FACTOR_CABLE;
    } else if (red == 'M') {
        factor = FACTOR_MOVIL;
    } else {
        printf("Tipo de red incorrecto.\n");
        return 1;
    }

    if (velocidad <= 0 || tamano < 0) {
        printf("Valores ingresados incorrectos.\n");
        return 1;
    }

    tiempo=(tamano/(velocidad* MBIT_A_MBYTE*factor))/ 60;
    positivo=(tiempo>0);
    descuento=tiempo*0.05;
    tiempo_final=tiempo- descuento;

    // Presentacion de datos
    printf("Tiempo de descarga: %.2f minutos\n", tiempo);
    printf("Tiempo mayor que cero (1=Si, 0=No): %d\n", positivo);
    printf("Descuento del 5%%: %.2f minutos\n", descuento);
    printf("Tiempo final: %.2f minutos\n", tiempo_final);

    return 0;
}