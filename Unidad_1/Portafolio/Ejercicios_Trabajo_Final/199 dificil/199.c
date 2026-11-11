//se definen las 2 librerias para manejo de datos y funcion porincipal
#include <stdio.h>
#include <string.h>
int main() {
    //lectura y definicion de variables y constantes
    float PESO_CALIDAD = 0.35;
    float PESO_PLAZOS = 0.25;
    float PESO_PRECIO = 0.25;
    float PESO_SERVICIO = 0.15;
    int VOLUMEN_MIN = 100;
    float DESCUENTO = 0.05;
    float calidad, plazos, precio, servicio;
    float puntuacion, descuento, puntuacion_final;
    int volumen_pedidos;
    char *categoria;
    printf("--------------------------------------------------\n");
    printf("Bienvenido al sistema de evaluacion de proveedores\n");
    printf("--------------------------------------------------\n");
    printf("Ingrese la calidad del producto (0-100): ");
    scanf("%f", &calidad);
    printf("Ingrese el cumplimiento de plazos (0-100): ");
    scanf("%f", &plazos);
    printf("Ingrese el precio competitivo (0-100): ");
    scanf("%f", &precio);
    printf("Ingrese el servicio postventa (0-100): ");
    scanf("%f", &servicio);
    printf("Ingrese el volumen de pedidos: ");
    scanf("%d", &volumen_pedidos);
    //se uso varias condiones en un solo if para evaluar
    //no se permite el ingreso de datos nulos omenores que cero
    if (calidad >= 0 && calidad <= 100 &&
        plazos >= 0 && plazos <= 100 &&
        precio >= 0 && precio <= 100 &&
        servicio >= 0 && servicio <= 100 &&
        volumen_pedidos >= 0) {
        puntuacion = calidad * PESO_CALIDAD + plazos * PESO_PLAZOS + precio * PESO_PRECIO + servicio * PESO_SERVICIO;
        descuento = puntuacion * DESCUENTO;
        puntuacion_final = puntuacion - descuento;
//se realiza un if para verificar o descalificar al proveedor
        if (puntuacion_final >= 70 && volumen_pedidos >= VOLUMEN_MIN) {
            categoria = "Proveedor aprobado";
        } else {
            if (puntuacion_final >= 50 && volumen_pedidos >= VOLUMEN_MIN) {
                categoria = "Proveedor en observacion";
            } else {
                categoria = "Proveedor no aprobado";
            }
        }
        //se presentan resultados
        printf("Puntuacion obtenida: %.2f\n", puntuacion);
        printf("Descuento del 5%%: %.2f\n", descuento);
        printf("Puntuacion final: %.2f\n", puntuacion_final);
        printf("Evaluacion: %s\n", categoria);
//se presenta mediante un if la decicion final
        if (strcmp(categoria, "Proveedor aprobado") == 0) {
            printf("El proveedor cumple con los requisitos\n");
        } else {
            if (strcmp(categoria, "Proveedor en observacion") == 0) {
                printf("El proveedor necesita mejorar\n");
            } else {
                printf("El proveedor no cumple con los requisitos\n");
            }
        }
    } else {
        printf("Error, datos ingresados no validos\n");
    }
    printf("Final de operacion, fin del sistema\n");
}