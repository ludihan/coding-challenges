using System;

class URI {

    static void Main(string[] args) {
        double dinheiroF;
        int dinheiro;
        int[] valores = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
        dinheiroF = double.Parse(Console.ReadLine());
        dinheiro = (int) (dinheiroF * 100);
        Console.WriteLine("NOTAS:");
        for (int i = 0; i < 12; i++) {
            int v = valores[i];
            valores[i] = dinheiro / v;
            dinheiro -= valores[i] * v;
            if (i < 6) {
                Console.WriteLine("{0} nota(s) de R$ {1}", valores[i], ((double) v / 100).ToString("0.00"));
            } else {
                if (i == 6) {
                    Console.WriteLine("MOEDAS:");
                }
                Console.WriteLine("{0} moeda(s) de R$ {1}", valores[i], ((double) v / 100).ToString("0.00"));
            }
        }
    }
}

