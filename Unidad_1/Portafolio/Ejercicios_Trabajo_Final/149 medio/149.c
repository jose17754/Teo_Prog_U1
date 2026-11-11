//definimos las librerias y la funcion principal, en este caso usamos tambien la libreria math.h
#include <stdio.h>
#include <math.h>
int main() {
    //usamos constantes y solicitamo singreso de datos
    const float FACTOR=0.5556;
    const float OFFSET_K=273.15;
    float fahrenheit, kelvin, kelvin_redondeado;
    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);
    //condicional para medir que sae mayor a cero
    if (fahrenheit>=0) {
        kelvin=(fahrenheit-32)*FACTOR+OFFSET_K;
        if (kelvin>=0) {
            //roundf es una funcion de math.h para redondear cantidades
            kelvin_redondeado=roundf(kelvin*100)/100;
            //presentamos el resiltado redondeado a dos decimales
            printf("%.2f F equivalen a %.2f K\n", fahrenheit, kelvin_redondeado);
        } else {
            printf("Error, la temperatura en K debe ser positiva");
        }
    } else {
        printf("Error, la temperatura debe ser positiva");
    }
}