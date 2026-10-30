#include <stdio.h>

int main() {
    int res1, res2, fuente,resp;
    int req,corr,pot;
    printf("Ingrese el valor de la resistencia 1 (en ohmios): ");
    scanf("%d",res1);
    printf("Ingrese el valor de la resistencia 2 (en ohmios): ");
    scanf("%d",res2);
    printf("Ingrese el valor de la fuente (en voltaje): ");
    scanf("%d",fuente);
    printf("REQUERIMIETOS DEL FABRICANTE\n Corriete maxima: 2 A\n Potencia maxima: 20 W\n Resistencia equivalente minima admisible: 3 ohms\n");
    printf("Las resistencias estan en serie o paralelo?\n1-selecionar serie\n2-selencionar paralelo: ");
    scanf("%d",&resp);
    if (resp==1){
        req=res1+res2;
    }else if(resp==2){
        req=(res1*res2)/(res1+res2);
    }else{
        printf("Valor ingresado icorrecto");
    }
    
    corr=fuente/req;
    pot=fuente*corr;
    printf("el valor de la resistencia es %d ",req);
    printf("el valor de la corriente es %d ",corr);
    printf("el valor de la potencia es %d ",pot);


}