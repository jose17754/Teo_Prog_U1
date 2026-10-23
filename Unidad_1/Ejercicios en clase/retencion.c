#include <stdio.h>
#include <string.h>
//sistema de factura
int main(){
/* CREA UN SISTEMA QUE PIDA EL VALOR TOTAL DE LA FACTURA Y DE QUE TIPO ES: SI ES POR SERVICIOS PROFECIONALES SE RETIENE EL 10%, 
SI ES POR SERVICIOS EDUCATIVOS EL 8 % SE DEBE DEVOLVER EL VALOR RETENIDO*/
float valor_fact;
float PROFESIONAL=0.10;
float EDUCATIVO=0.08;
float retencion=0.0;
int seleccion;
char nombres[60];

printf("--------------------------------------------------------\n");
printf("               SISTEMA DE FACTURACION\n");
printf("--------------------------------------------------------\n");

printf("Ingrese su nombre: \n");
fgets(nombres,sizeof(nombres), stdin);

printf("Ingrese el valor total de la factura: \n");
scanf("%f",&valor_fact);

printf("Ingrese el tipo de factura.\n1. Factura Prefesional\n2. Factura Educativa\n");
scanf("%d",&seleccion);

if (seleccion==1){
    printf("Estimado %sUsted a seleccionado la factura profesional.\n",nombres);
    retencion=valor_fact*PROFESIONAL;
}else if (seleccion==2){
    printf("Estimado %s, Usted a seleccionado la factura educativa.\n",nombres);
    retencion=valor_fact*EDUCATIVO;
}
else{
    printf("Sintaxis no correcta.\n");
}

printf("Su valor q retener equivale a %2f ",retencion);

}