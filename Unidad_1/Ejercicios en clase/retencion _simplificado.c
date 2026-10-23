#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//sistema de factura
int main(){
/* CREA UN SISTEMA QUE PIDA EL VALOR TOTAL DE LA FACTURA Y DE QUE TIPO ES: SI ES POR SERVICIOS PROFECIONALES SE RETIENE EL 10%, 
SI ES POR SERVICIOS EDUCATIVOS EL 8 % SE DEBE DEVOLVER EL VALOR RETENIDO*/
//creacion y deficion de variables
float valor_fact;
float retencion=0.0;
int seleccion;
char nombres[60];
int dec=1;
//inicio del sistema
printf("--------------------------------------------------------\n");
printf("               SISTEMA DE FACTURACION\n");
printf("--------------------------------------------------------\n");
//ingreso de varibles
printf("Ingrese su nombre: \n");
fgets(nombres,60, stdin);
printf("Ingrese el valor total de la factura: \n");
scanf("%f",&valor_fact);

printf("Ingrese el tipo de factura.\n1. Factura Prefesional\n2. Factura Educativa.\n");
scanf("%d",&seleccion);

//condiiconal y calculos
retencion=(seleccion==1)?valor_fact*0.10:(seleccion==2)?valor_fact*0.08:printf("Sintaxis no correcta.\n"),exit(1);

//presentacioon
printf("Estimado %sSu valor q retener equivale a %2f ",nombres,retencion);
}