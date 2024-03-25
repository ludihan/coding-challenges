using System;

class URI {

    static void Main(string[] args) {
        Console.ReadLine();
        double salario, venda;
        salario = double.Parse(Console.ReadLine());
        venda = double.Parse(Console.ReadLine());
        Console.WriteLine("TOTAL = R$ {0}", (salario + (venda * 0.15)).ToString("0.00"));
    }
}
