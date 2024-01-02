package main

import (
	"fmt"
	"math"
)

func main() {
	var A, B, C float64
	fmt.Scanf("%f %f %f", &A, &B, &C)
	fmt.Printf("TRIANGULO: %.3f\n", (A*C)/2)
	fmt.Printf("CIRCULO: %.3f\n", 3.14159*math.Pow(C, 2))
	fmt.Printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2)
	fmt.Printf("QUADRADO: %.3f\n", B*B)
	fmt.Printf("RETANGULO: %.3f\n", A*B)
    fmt.Scanf("%f", &A)
}
