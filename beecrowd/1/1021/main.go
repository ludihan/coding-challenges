package main

import (
	"fmt"
	"math"
)

func main() {
	var dinheiro float64
	var valores = [...]float64{100, 50, 20, 10, 5, 2, 1, .5, .25, .10, .05, .01}
	fmt.Scan(&dinheiro)
	fmt.Println("NOTAS:")
	for i, v := range valores {
		valores[i] = math.Floor(dinheiro / v)
		dinheiro -= valores[i] * v
		if i < 6 {
			fmt.Printf("%.0f nota(s) de R$ %.2f\n", valores[i], v)
		} else {
			if i == 6 {
				fmt.Println("MOEDAS:")
			}
			fmt.Printf("%.0f moeda(s) de R$ %.2f\n", valores[i], v)
		}
	}
}
