//Llamado de librerias necesarias
#include <stdio.h>
//funcion principal
int main(){
    //creacion de varibles
    int GB,archivos_doc,tamanio_doc,archivos_img,tamanio_img,archivos_vid,tamanio_vid,archivos_prog,tamanio_prog,capacidad_disco_GB;
    int espacio_doc,espacio_img,espacio_vid,espacio_prog;
    float GB_usados,Porcentaje,Espacio_sobra,Espacio_total;
    GB=1024;

    //lectura de variables
    printf("-------------------------------------\n");
    printf("Sistema de manejo de Almacenamiento\n");
    printf("-------------------------------------\n");
    printf("ingrese la cantidad de documentos\n");
    scanf("%d",&archivos_doc);
    printf("ingrese el tamanio de documentos en MB\n");
    scanf("%d",&tamanio_doc);
    printf("ingrese la cantidad de imagenes\n");
    scanf("%d",&archivos_img);
    printf("ingrese el tamanio de imagenes en MB\n");
    scanf("%d",&tamanio_img);
    printf("ingrese la cantidad de videos\n");
    scanf("%d",&archivos_vid);
    printf("ingrese el tamanio de videos en MB\n");
    scanf("%d",&tamanio_vid);
    printf("ingrese la cantidad de programas\n");
    scanf("%d",&archivos_prog);
    printf("ingrese el tamanio de programas en MB\n");
    scanf("%d",&tamanio_prog);
    printf("ingrese la capacidad del disco en GB\n");
    scanf("%d",&capacidad_disco_GB);

    //operaciones de calculo
    espacio_doc=(archivos_doc*tamanio_doc);
    espacio_img=(archivos_img*tamanio_img);
    espacio_vid=(archivos_vid*tamanio_vid);
    espacio_prog=(archivos_prog*tamanio_prog);


    Espacio_total=(espacio_doc+espacio_img+espacio_vid+espacio_prog);
    GB_usados=(Espacio_total/GB);
    Espacio_sobra=(capacidad_disco_GB-GB_usados);
    Porcentaje=((GB_usados/capacidad_disco_GB)*100);

    //Presentacion de datos
    printf("El almacenamiento usado es de : %2f GB\n", GB_usados);
    printf("El porcentaje de uso es: %2f %%\n", Porcentaje);
    printf("El almacenamiento sobrante es: %2f GB\n", Espacio_sobra);

    
    printf("Cerrando sistema......\n");
}