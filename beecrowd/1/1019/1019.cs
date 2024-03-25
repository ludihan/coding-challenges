using System;

class URI {

    static void Main(string[] args) {
        int segundos = 0;
        int[] tempo = {60 * 60, 60, 1};
        segundos = int.Parse(Console.ReadLine());

        for (int i = 0; i < 3; i++) {
            int v = tempo[i];
            tempo[i] = segundos / v;
            segundos -= tempo[i] * v;
        }
        Console.WriteLine("{0}:{1}:{2}", tempo[0], tempo[1], tempo[2]);
    }
}

