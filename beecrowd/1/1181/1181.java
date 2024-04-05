import java.io.IOException;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float num[][] = new float[12][12];
        float total = 0;
        int linha;
        char op;

        linha = sc.nextInt();
        op = sc.next().charAt(0);

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                num[i][j] = sc.nextFloat();
            }
        }

        for (int i = 0; i < 12; i++) {
            total += num[linha][i];
        }

        if (op == 'S') {
            System.out.printf("%.1f\n", total);
        } else {
            System.out.printf("%.1f\n", total / 12);
        }
        sc.close();
    }

}

