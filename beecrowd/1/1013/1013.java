import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static int maiorAB(int A, int B) {
        return ((A + B + Math.abs(A - B))) / 2;
    }

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int num[] = new int[3];
        int maior;
        for (int i = 0; i < 3; i++) {
            num[i] = sc.nextInt();
        }

        maior = maiorAB(num[0], num[1]);
        maior = maiorAB(maior, num[2]);

        System.out.printf("%d eh o maior\n", maior);
        sc.close();

    }

}
