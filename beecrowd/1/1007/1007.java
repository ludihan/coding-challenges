import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int v[] = new int[4];
        for (int i = 0; i < 4; i++) {
            v[i] = sc.nextInt();
        }
        System.out.printf("DIFERENCA = %d\n", v[0] * v[1] - v[2] * v[3]);
        sc.close();

    }

}
