using System;

class URI {

    static void Main(string[] args) {
        int numero, horas;
        double valor;
        numero = int.Parse(Console.ReadLine());
        horas = int.Parse(Console.ReadLine());
        valor = double.Parse(Console.ReadLine());
        Console.WriteLine("NUMBER = {0}", numero);
        Console.WriteLine("SALARY = U$ {0}", (horas * valor).ToString("0.00"));
    }
}
