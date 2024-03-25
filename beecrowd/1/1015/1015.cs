using System;

class URI {

    static void Main(string[] args) {
        double[] x = new double[2];
        double[] y = new double[2];
        for (int i = 0; i < 2; i++) {
            string[] input = Console.ReadLine().Split(' ');
            x[i] = double.Parse(input[0]);
            y[i] = double.Parse(input[1]);
        }
        Console.WriteLine("{0}", (Math.Sqrt( Math.Pow(x[1] - x[0], 2) + Math.Pow(y[1] - y[0], 2) )).ToString("0.0000"));
    }
}

