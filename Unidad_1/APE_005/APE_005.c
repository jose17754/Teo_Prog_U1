//GALERIAS NECESAARIAS
#include <stdio.h>
//FUNCION PRINCIPAL
int main(){
    //DEFINICION DE VARIABLES
    float C1,C2,NL,NC,C3;
    float NOTA_APRO = 60;
//INGRESO DE VARIABLES
    printf("INGRESE LA PRIMERA NOTA");
    scanf("%f",&C1);
    printf("INGRESE LA SEGUNDA NOTA");
    scanf("%f",&C2);
    printf("INGRESE LA NOTA DE LABORATORIO");
    scanf("%f",&NL);
    //PROCESOS INTERNOS
    NC = (60-NL*0.30)/0.70;
    C3 = (NC* 3)-C1-C2;
    //PRESENTACION DE RESUKLTRADOS
    printf("LA NOTA NECESARIA ES:  %.2f",C3);
}