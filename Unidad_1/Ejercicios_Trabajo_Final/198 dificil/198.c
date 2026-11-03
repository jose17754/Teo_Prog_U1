//definicion de libreria y funcion principal
#include <stdio.h>
int main() {
    //definicion de constantes y variables, tambien lectura de los datos necesarios
    float TARIFA_B=25.0;
    float TARIFA_P=45.0;
    float TARIFA_V =80.0;
    float DESC_ESTUDIANTE=0.20;
    float DESC_ADULTO_MAYOR=0.30;
    float COSTO_SERVICIO_EXTRA=5.0;
    float DESCUENTO_FINAL=0.05;
    int edad, frecuencia_semanal, servicios_adicionales;
    char tipo_membresia, es_estudiante;
    float tarifa_base, costo_extra, subtotal, descuento;
    float tarifa_descuento, descuento_adicional, tarifa_final;
    //mensaje personalisado
    printf("----------------------------------------------------\n");
    printf("Bienvenido al gimnasio, calculemos su tarifa mensual\n");
    printf("----------------------------------------------------\n");
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("Ingrese el tipo de membresia (B=Basica, P=Premium, V=VIP): ");
    scanf(" %c", &tipo_membresia);
    printf("Ingrese la frecuencia semanal (1-7): ");
    scanf("%d", &frecuencia_semanal);
    printf("Ingrese la cantidad de servicios adicionales: ");
    scanf("%d", &servicios_adicionales);
    printf("Es estudiante? (S=Si, N=No): ");
    scanf(" %c", &es_estudiante);
    //condicionales con uso del AND y OR, se verifica que la edad sea verdadera y no pertenesca anumeros negativos
    if (edad > 0 && frecuencia_semanal >= 1 && frecuencia_semanal <= 7 &&
        servicios_adicionales >= 0 &&
        (tipo_membresia == 'B' || tipo_membresia == 'P' || tipo_membresia == 'V') &&
        (es_estudiante == 'S' || es_estudiante == 'N')) {
        if (tipo_membresia == 'B') {
            tarifa_base = TARIFA_B;
        } else {
            if (tipo_membresia == 'P') {
                tarifa_base = TARIFA_P;
            } else {
                tarifa_base = TARIFA_V;
            }
        }
        costo_extra = servicios_adicionales * COSTO_SERVICIO_EXTRA;
        subtotal = tarifa_base + costo_extra;
        if (edad >= 65) {
            descuento = subtotal * DESC_ADULTO_MAYOR;
        } else {
            if (es_estudiante == 'S') {
                descuento = subtotal * DESC_ESTUDIANTE;
            } else {
                descuento = 0;
            }
        }
        //calculos de tarifas y descuentos
        tarifa_descuento = subtotal - descuento;
        descuento_adicional = tarifa_descuento * DESCUENTO_FINAL;
        tarifa_final = tarifa_descuento - descuento_adicional;
        //se presentan los datos obtenidos
        printf("Tarifa base: %.2f\n", tarifa_base);
        printf("Costo de servicios adicionales: %.2f\n", costo_extra);
        printf("Descuento aplicado: %.2f\n", descuento);
        printf("Descuento adicional del 5%%: %.2f\n", descuento_adicional);
        printf("Tarifa mensual final: %.2f\n", tarifa_final);
    } else {
        printf("Error, datos ingresados no validos\n");
    }
    printf("Final de operacion, fin del sistema\n");
}