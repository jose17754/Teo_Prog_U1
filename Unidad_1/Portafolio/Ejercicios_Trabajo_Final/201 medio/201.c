//definimos las librerias a utilizar y funcion principal
#include <stdio.h>
int main() {
    //creamos las varibles y solicitamos datos al ussuario
    float largo, ancho, alto, volumen, bono;
    int contador;
    printf("Ingrese el largo: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho: ");
    scanf("%f", &ancho);
    printf("Ingrese el alto: ");
    scanf("%f", &alto);
    contador=0;
    //condion de datos mayores a cero
    if (largo>0 && ancho>0 && alto>0) {
        volumen=largo*ancho*alto;
        contador=contador+1;
        bono=volumen*1.5;
        contador=contador+1;
        //presentamos los resuktados obtenidos
        printf("Volumen: %.2f\n", volumen);
        printf("Bono: %.2f\n", bono);
        printf("Cantidad de operaciones realizadas: %d\n", contador);
    } else {
        printf("Error, dimensiones menores a cero no validas\n");
    }
}