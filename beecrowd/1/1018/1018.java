import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int dinheiro, quantidade;
        dinheiro = sc.nextInt();

        int notas[] = {100, 50, 20, 10, 5, 2, 1};
        System.out.printf("%d\n", dinheiro);
        for (int i = 0; i < 7; i++) {
            quantidade = dinheiro / notas[i];
            dinheiro -= quantidade * notas[i];
            System.out.printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
        }

        sc.close();

    }

}
