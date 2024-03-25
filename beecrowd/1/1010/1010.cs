using System;

class URI {

    static void Main(string[] args) {
        int[] c = new int[2];
        int[] n = new int[2];
        double[] v = new double[2];
        for (int i = 0; i < 2; i++) {
            string[] input = Console.ReadLine().Split(' ');
            c[i] = int.Parse(input[0]);
            n[i] = int.Parse(input[1]);
            v[i] = double.Parse(input[2]);
        }
        Console.WriteLine("VALOR A PAGAR: R$ {0}", (n[0] * v[0] + n[1] * v[1]).ToString("0.00"));
    }
}
