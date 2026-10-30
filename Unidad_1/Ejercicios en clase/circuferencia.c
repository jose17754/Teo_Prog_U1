#include <stdio.h>
#include <math.h>
int main() {
    int x1,y1,x2,y2,rad1,rad2;
    float d=0.0;
    printf("ingrese los valores de x1 : \n");
    scanf("%d",&x1);
    printf("ingrese los valores de y1 : \n");
    scanf("%d",&y1);
    printf("ingrese los valores de x2 : \n");
    scanf("%d",&x2);
    printf("ingrese los valores de y2 : \n");
    scanf("%d",&y2);

    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("%f",d);

    if (rad1>0 && rad2>0){
        printf("Los radios son positivos \n");
    }

    printf("La distancia es : %d", d);

}