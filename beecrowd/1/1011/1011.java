import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double R = sc.nextDouble();
        System.out.printf("VOLUME = %.3f\n", (4.0 / 3) * 3.14159 * Math.pow(R, 3));
        sc.close();

    }

}
