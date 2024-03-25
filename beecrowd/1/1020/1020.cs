using System;

class URI {

    static void Main(string[] args) {
        int d = int.Parse(Console.ReadLine());
        Console.WriteLine("{0} ano(s)", d / 365);
        d = d % 365;
        Console.WriteLine("{0} mes(es)", d / 30);
        d = d % 30;
        Console.WriteLine("{0} dia(s)", d);
    }
}

