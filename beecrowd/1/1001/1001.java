import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        System.out.println("X = " + (sc.nextInt() + sc.nextInt()));
        sc.close();

    }

}
