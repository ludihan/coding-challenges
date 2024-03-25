import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double A, B, C;
        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();
        System.out.printf("MEDIA = %.1f\n", (A * 2 + B * 3 + C * 5) / 10);
        sc.close();

    }

}
