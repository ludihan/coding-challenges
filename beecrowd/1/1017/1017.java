import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int horas, velMed;
        horas = sc.nextInt();
        velMed = sc.nextInt();

        System.out.printf("%.3f\n", horas * velMed / 12.0);

        sc.close();

    }

}
