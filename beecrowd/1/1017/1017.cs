using System;

class URI {

    static void Main(string[] args) {
        int horas, velMed;
        horas = int.Parse(Console.ReadLine());
        velMed = int.Parse(Console.ReadLine());
        Console.WriteLine("{0}", (horas * velMed / 12.0).ToString("0.000"));
    }
}

