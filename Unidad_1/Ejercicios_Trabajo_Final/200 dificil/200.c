//definion de librerias y funcion principal
#include <stdio.h>
int main() {
    //definion de constantes e ingreso de datos
    float FACTOR_CASUAL = 1.0;
    float FACTOR_ESTRATEGICO = 1.5;
    int MIN_PARTIDAS = 5;
    int partidas, pausas;
    float duracion, duracion_pausas, factor;
    float tiempo_total, descuento, tiempo_final;
    char tipo_juego;
    printf("Ingrese la cantidad de partidas: ");
    scanf("%d",&partidas);
    printf("Ingrese la duracion de cada partida en minutos: ");
    scanf("%f",&duracion);
    printf("Ingrese la cantidad de pausas: ");
    scanf("%d",&pausas);
    printf("Ingrese la duracion de cada pausa en minutos: ");
    scanf("%f",&duracion_pausas);
    printf("Ingrese el tipo de juego (C=Casual, E=Estrategico): ");
    scanf(" %c",&tipo_juego);
    //condiconal de tipo de juego
    if (tipo_juego == 'C') {
        factor = FACTOR_CASUAL;
    } else {
        factor = FACTOR_ESTRATEGICO;
    }
    tiempo_total = (partidas * duracion + pausas * duracion_pausas) * factor;
    //condional de la cantidad de oartidas
    if (partidas >= MIN_PARTIDAS) {
        printf("Cumple con el minimo de partidas\n");
    } else {
        printf("No cumple con el minimo de partidas\n");
    }
    //calculos de escuento y el tiempo
    descuento = tiempo_total * 0.05;
    tiempo_final = tiempo_total - descuento;
    //presentacion de datos calculados
    printf("Tiempo total de juego: %.2f\n", tiempo_total);
    printf("Descuento del 5%%: %.2f\n", descuento);
    printf("Tiempo final de juego: %.2f\n", tiempo_final);
}