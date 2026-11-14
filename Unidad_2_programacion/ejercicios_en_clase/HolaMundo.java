import java.util.Scanner;
public class HolaMundo {
    public static void main(String[] args) {
        float suma,a,b=0.0f;
        System.out.println("Ingresa los dos numeros a sumar: ");
        Scanner leedor = new Scanner(System.in);
        System.out.println("Ingresa el primer numero: ");
        a=leedor.nextFloat();
        System.out.println("Ingresa el segundo numero: ");
        b=leedor.nextFloat();
        suma = a + b;   
        System.out.println("La suma de " + a + " + " + b + " es = " + suma);
        leedor.close();
    }
}