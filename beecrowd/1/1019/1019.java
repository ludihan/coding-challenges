import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int segundos = sc.nextInt();
        int tempo[] = {60 * 60, 60, 1};

        for (int i = 0;i < 3; i++) {
            int v = tempo[i];
            tempo[i] = segundos / v;
            segundos -= tempo[i] * v;
        }

        System.out.printf("%d:%d:%d\n", tempo[0], tempo[1], tempo[2]);

        sc.close();

    }

}
