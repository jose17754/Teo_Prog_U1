//se llamo a dos librerias para el amnejo de lectura y presentacion de datos y para el manejo de cadena de caracteres
#include <stdio.h>
#include <string.h>
int main() {
    //definion de variables
    char nombre[50], apellido[50], nombre_completo[101];
    int resul_1, resul_2, diferencia_absoluta;
//lectura de nombres y resultados
    printf("Ingrese el nombre: ");
    scanf("%49s", nombre);
    printf("Ingrese el apellido: ");
    scanf("%49s", apellido);
    printf("Ingrese el primer resultado: ");
    scanf("%d", &resul_1);
    printf("Ingrese el segundo resultado: ");
    scanf("%d", &resul_2);
//se investigo e; uso del str para unir y ordenar el nombte y apellido
    strcpy(nombre_completo, nombre);
    strcat(nombre_completo, " ");
    strcat(nombre_completo, apellido);
    diferencia_absoluta = resul_1 - resul_2;
//se realiza un if en el caso que el numero sea negativo
    if (diferencia_absoluta < 0) {
        diferencia_absoluta = diferencia_absoluta * (-1);
    }
//doble condicional y presentacion del nombre
    if (strlen(nombre) > 0 && strlen(apellido) > 0) {
        printf("Nombre completo: %s\n", nombre_completo);
    } else {
        printf("Nombre o apellido vacio\n");
    }
//predentacion de datos
    printf("Diferencia absoluta: %d\n", diferencia_absoluta);
    printf("La operacion ha terminado");
}