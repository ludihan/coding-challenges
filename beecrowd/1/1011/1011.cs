using System;

class URI {

    static void Main(string[] args) {
        double R;
        R = double.Parse(Console.ReadLine());
        Console.WriteLine("VOLUME = {0}", ((4.0/3) * 3.14159 * Math.Pow(R, 3)).ToString("0.000"));
    }
}
