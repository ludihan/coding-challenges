import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double x[] = new double[2];
        double y[] = new double[2];
        for (int i = 0; i < 2; i++) {
            x[i] = sc.nextDouble();
            y[i] = sc.nextDouble();
        }
        System.out.printf("%.4f\n", Math.sqrt(
                    Math.pow(x[1] - x[0], 2) +
                    Math.pow(y[1] - y[0], 2)
                    ));
        sc.close();

    }

}
