import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        double dinheiroF;
        int dinheiro;
        int valores[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

        dinheiroF = sc.nextDouble();
        dinheiro = (int) (dinheiroF * 100);
        System.out.println("NOTAS:");

        for (int i = 0; i < 12; i++) {
            int v = valores[i];
            valores[i] = dinheiro / v;
            dinheiro -= valores[i] * v;
            if (i < 6) {
                System.out.printf("%d nota(s) de R$ %.2f\n", valores[i], (double) v / 100);
            } else {
                if (i == 6) {
                    System.out.println("MOEDAS:");
                }
                System.out.printf("%d moeda(s) de R$ %.2f\n", valores[i], (double) v / 100);
            }
        }

        sc.close();

    }

}
