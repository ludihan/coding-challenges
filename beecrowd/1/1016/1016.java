import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        System.out.printf("%d minutos\n", n * 2);

        sc.close();

    }

}
