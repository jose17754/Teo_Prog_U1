//defnimos librerias y funcion principal
#include <stdio.h>
int main() {
    //constantes y variables, solicitud de datos al usuario
    float PI=3.14159;
    float FACTOR=360;
    float radio, angulo, area_sector, cuadrado;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    printf("Ingrese el angulo: ");
    scanf("%f", &angulo);
    //condional para radio y angulo
    if (radio>0 && angulo>0) {
        //presenta el area y cuadrado
        area_sector=(PI*radio*radio*angulo)/FACTOR;
        cuadrado=area_sector*area_sector;
        printf("Area del sector: %.2f\n", area_sector);
        printf("Cuadrado del area: %.2f\n", cuadrado);
    } else {
        printf("Error, los datos no son validos\n");
    }
    //presenta los datos ingresados anteriormente
    printf("Los datos que ingresaste fueron:\n");
    printf("Radio: %.2f\n",radio);
    printf("Angulo: %.2f\n",angulo);
}