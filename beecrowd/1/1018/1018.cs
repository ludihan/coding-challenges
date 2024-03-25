using System;

class URI {

    static void Main(string[] args) {
        int dinheiro, quantidade;
        dinheiro = int.Parse(Console.ReadLine());

        int[] notas = {100, 50, 20, 10, 5, 2, 1};
        Console.WriteLine("{0}", dinheiro);
        for (int i = 0; i < 7; i++) {
            quantidade = dinheiro / notas[i];
            dinheiro -= quantidade * notas[i];
            Console.WriteLine("{0} nota(s) de R$ {1},00", quantidade, notas[i]);
        }
    }
}

