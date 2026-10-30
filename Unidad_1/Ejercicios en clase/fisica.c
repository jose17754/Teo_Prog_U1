#include <stdio.h>
#include <math.h>

int main(){
    float g=9.81;
    float presion_inicial,Presion_total,h;
    float densidad_dulce=1000.0;
    float densidad_salada=1027.0;
    float p=101325.0;
    printf("Ingrese la profundidad en metros: ");
    scanf("%f",&h);



    //dulce
    presion_inicial=densidad_dulce*g*h;
    Presion_total=presion_inicial+p;

    printf("En agua dulce : %2.f Pascales\n", Presion_total);
    //salada
    
    presion_inicial=densidad_salada*g*h;
    Presion_total=presion_inicial+p;
    printf("En agua salada : %2.f Pascales", Presion_total);




    
}