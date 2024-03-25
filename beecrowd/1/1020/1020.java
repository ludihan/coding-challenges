import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int d;
        d = sc.nextInt();
        System.out.printf("%d ano(s)\n", d / 365);
        d = d % 365;
        System.out.printf("%d mes(es)\n", d / 30);
        d = d % 30;
        System.out.printf("%d dia(s)\n", d);

        sc.close();

    }

}
