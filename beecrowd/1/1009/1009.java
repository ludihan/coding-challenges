import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double salario, venda;
        String nome = sc.next();
        salario = sc.nextDouble();
        venda = sc.nextDouble();
        System.out.printf("TOTAL = R$ %.2f\n", salario + (venda * 0.15));
        sc.close();

    }

}
