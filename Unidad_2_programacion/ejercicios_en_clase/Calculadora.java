import java.util.Scanner;
public class Calculadora {
    public static void main(String[] args) {
        float opcion,resultado,a,b=0.0f;
        Scanner leedor = new Scanner(System.in);
        System.out.println("Bienvenidoa  ala calculadora : ");
        System.out.println("Las opciones son: \n1.- Suma\n2.- Resta\n3.- Multiplicacion\n4.- Division");
        opcion=leedor.nextFloat();
        System.out.println("Ingresa el primer numero: ");
        a=leedor.nextFloat();
        System.out.println("Ingresa el segundo numero: ");
        b=leedor.nextFloat();
        switch((int)opcion){
            case 1:
                resultado= a+b;
                System.out.println("La suma de " + a + " + " + b + " es = " + resultado);
            case 2:
                resultado= a-b;
                System.out.println("La resta de " + a + " - " + b + " es = " + resultado);
            case 3:
                resultado= a*b;
                System.out.println("La multiplicacion de " + a + " * " + b + " es = " + resultado);
            case 4:
                resultado= a/b;
                System.out.println("La division de " + a + " / " + b + " es = " + resultado);
            default :
                System.err.println("LA OPCION INGRESADA RESULTA INVALIDA");
        }
        leedor.close();
    }
}
