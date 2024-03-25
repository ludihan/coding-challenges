using System;

class URI {

    static int maiorAB(int A, int B) {
        return ((A + B + Math.Abs(A - B))) / 2;
    }

    static void Main(string[] args) {
        int[] num = new int[3];
        int maior;
        string[] input = Console.ReadLine().Split(' ');
        num[0] = int.Parse(input[0]);
        num[1] = int.Parse(input[1]);
        num[2] = int.Parse(input[2]);
        maior = maiorAB(num[0], num[1]);
        maior = maiorAB(maior, num[2]);
        Console.WriteLine("{0} eh o maior",maior);
    }
}
