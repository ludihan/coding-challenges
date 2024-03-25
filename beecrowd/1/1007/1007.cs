using System;

class URI {

    static void Main(string[] args) {
        int A, B, C, D;
        A = int.Parse(Console.ReadLine());
        B = int.Parse(Console.ReadLine());
        C = int.Parse(Console.ReadLine());
        D = int.Parse(Console.ReadLine());
        Console.WriteLine("DIFERENCA = {0}", A * B - C * D);
    }
}
