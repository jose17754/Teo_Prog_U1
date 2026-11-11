//libreria y funcion principal
#include <stdio.h>
int main() {
    //ingreos de variables
    float nota_1, nota_2, nota_3, nota_4, nota_5, referencia;
    float suma, mayor, menor, promedio, porcentaje;
    printf("Ingrese las cinco notas:\n");
    scanf("%f %f %f %f %f", &nota_1, &nota_2, &nota_3, &nota_4, &nota_5);
    printf("Ingrese el valor de referencia: ");
    scanf("%f", &referencia);
    //definimos mayor y meor y sacamos la suma
    suma=nota_1+nota_2+nota_3+nota_4+nota_5;
    mayor=nota_1;
    menor=nota_1;
    //condiconal de mayor y menor
    if (nota_2>mayor) {
        mayor=nota_2;
    }
    if (nota_3>mayor) {
        mayor=nota_3;
    }
    if (nota_4>mayor) {
        mayor=nota_4;
    }
    if (nota_5>mayor) {
        mayor=nota_5;
    }

    if (nota_2<menor) {
        menor=nota_2;
    }
    if (nota_3<menor) {
        menor=nota_3;
    }
    if (nota_4<menor) {
        menor=nota_4;
    }
    if (nota_5<menor) {
        menor=nota_5;
    }
//calculo de promedio y porcentaje
    promedio=(suma-mayor-menor)/3;
    porcentaje=(promedio/referencia)*100;
    //presentamos los datos
    printf("Promedio de las tres notas: %.2f\n", promedio);
    printf("Porcentaje respecto a la referencia: %.2f%%\n", porcentaje);
}