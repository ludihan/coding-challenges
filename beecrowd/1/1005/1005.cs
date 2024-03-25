using System;

class URI {

    static void Main(string[] args) {
        double A, B;
        A = double.Parse(Console.ReadLine());
        B = double.Parse(Console.ReadLine());
        Console.WriteLine("MEDIA = {0}", ((A * 3.5 + B * 7.5) / 11).ToString("0.00000"));
    }
}
