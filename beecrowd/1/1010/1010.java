import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int c[] = new int[2];
        int n[] = new int[2];
        double v[] = new double[2];
        for (int i = 0; i < 2; i++) {
            c[i] = sc.nextInt();
            n[i] = sc.nextInt();
            v[i] = sc.nextDouble();
        }

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", n[0] * v[0] + n[1] * v[1]);
        sc.close();

    }

}
