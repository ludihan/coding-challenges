using System;

class URI {

    static void Main(string[] args) {
        double raio = double.Parse(Console.ReadLine());
        Console.WriteLine("A={0}", (raio * raio * 3.14159).ToString("0.0000"));
    }
}
