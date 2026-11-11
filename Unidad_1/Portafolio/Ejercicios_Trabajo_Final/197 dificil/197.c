//se define librerias y funcion principal
#include <stdio.h>
int main() {
    //ingreso de varaibles y constantes
    float VELOCIDAD_MEDIA = 60;
    float TIEMPO_BASE = 24;
    float FACTOR_EXPRESS = 0.5;
    float FACTOR_SAME_DAY = 0.1;
    float DESCUENTO = 0.05;
    float distancia, tiempo_estimado, descuento_tiempo, tiempo_final;
    char tipo_envio, destino;
    int hora_recogida;
    printf("Ingrese la distancia en km: ");
    scanf("%f", &distancia);
    printf("Ingrese el tipo de envio (N=Normal, E=Express, S=Same Day): ");
    scanf(" %c", &tipo_envio);
    printf("Ingrese el destino (U=Urbano, N=Nacional, I=Internacional): ");
    scanf(" %c", &destino);
    printf("Ingrese la hora de recogida (0-23): ");
    scanf("%d", &hora_recogida);
    //condicional usando and y or para validar el ingreso de los datos
    if (distancia >= 0 && hora_recogida >= 0 && hora_recogida <= 23 &&
        (tipo_envio == 'N' || tipo_envio == 'E' || tipo_envio == 'S') &&
        (destino == 'U' || destino == 'N' || destino == 'I')) {
        tiempo_estimado = TIEMPO_BASE + (distancia / VELOCIDAD_MEDIA);
        if (tipo_envio == 'E') {
            tiempo_estimado = tiempo_estimado * FACTOR_EXPRESS;
        } else {
            if (tipo_envio == 'S') {
                tiempo_estimado = tiempo_estimado * FACTOR_SAME_DAY;
            }
        }
        //calculos
        descuento_tiempo = tiempo_estimado * DESCUENTO;
        tiempo_final = tiempo_estimado - descuento_tiempo;
        //presentacion de variables el descuento se le aplica al tiempo 
        //debido a que no se cuenta con un precio establecido
        printf("Tiempo estimado de entrega: %.2f\n", tiempo_estimado);
        printf("Descuento del 5%%: %.2f\n", descuento_tiempo);
        printf("Tiempo final de entrega: %.2f\n", tiempo_final);
    } else {
        printf("Error, datos ingresados no validos\n");
    }
    printf("Final de operacion, fin del sistema\n");
}