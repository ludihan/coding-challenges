package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		num   [3]float64
		maior float64
	)
	fmt.Scanf("%v %v %v", &num[0], &num[1], &num[2])
	maior = maiorAB(num[0], num[1])
	maior = maiorAB(maior, num[2])
	fmt.Printf("%v eh o maior\n", maior)
}

func maiorAB(A, B float64) float64 {
	return (A + B + math.Abs(A-B)) / 2
}
