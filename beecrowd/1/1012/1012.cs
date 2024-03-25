using System;

class URI {

    static void Main(string[] args) {
        double A, B, C;
        string[] input = Console.ReadLine().Split(' ');
        A = double.Parse(input[0]);
        B = double.Parse(input[1]);
        C = double.Parse(input[2]);
        Console.WriteLine("TRIANGULO: {0}",((A*C)/2).ToString("0.000"));
        Console.WriteLine("CIRCULO: {0}",(3.14159 * Math.Pow(C,2)).ToString("0.000"));
        Console.WriteLine("TRAPEZIO: {0}",(((A+B) * C)/2).ToString("0.000"));
        Console.WriteLine("QUADRADO: {0}",(B*B).ToString("0.000"));
        Console.WriteLine("RETANGULO: {0}",(A*B).ToString("0.000"));
    }
}
