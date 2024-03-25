import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double raio = sc.nextDouble();
        System.out.printf("A=%.4f\n", raio * raio * 3.14159);
        sc.close();

    }

}
