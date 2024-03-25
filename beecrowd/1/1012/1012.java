import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double A, B, C;
        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();
        System.out.printf("TRIANGULO: %.3f\n",(A*C)/2);
        System.out.printf("CIRCULO: %.3f\n",3.14159 * Math.pow(C,2));
        System.out.printf("TRAPEZIO: %.3f\n",((A+B) * C)/2);
        System.out.printf("QUADRADO: %.3f\n",B*B);
        System.out.printf("RETANGULO: %.3f\n",A*B);
        sc.close();

    }

}
