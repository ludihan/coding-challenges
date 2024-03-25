import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int numero, horas;
        double valor;
        numero = sc.nextInt();
        horas = sc.nextInt();
        valor = sc.nextDouble();
        System.out.printf("NUMBER = %d\n", numero);
        System.out.printf("SALARY = U$ %.2f\n", horas * valor);
        sc.close();

    }

}
