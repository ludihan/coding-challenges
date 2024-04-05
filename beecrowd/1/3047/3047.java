import java.io.IOException;
import java.util.Scanner;

class Main {

    public static int max(int A,int B,int C) {
        int max = A;
        if (B > max) {
            max = B;
        }
        if (C > max) {
            max = C;
        }
        return max;
    }

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int M, A, B;
        M = sc.nextInt();
        A = sc.nextInt();
        B = sc.nextInt();
        int C = M - (A + B);
        int n = max(A, B, C);
        System.out.println(n);

        sc.close();

    }

}

