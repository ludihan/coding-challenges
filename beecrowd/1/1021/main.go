package main

import (
	"fmt"
)

func main() {
	var dinheiroF float32
	var dinheiro int
	var valores = [...]int{10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1}
	fmt.Scanf("%f", &dinheiroF)
	dinheiro = int(dinheiroF * 100)
	fmt.Println("NOTAS:")
	for i, v := range valores {
        //fmt.Println("DINHEIRO:", dinheiro)
		valores[i] = dinheiro / v
		dinheiro -= valores[i] * v
		if i < 6 {
			fmt.Printf("%v nota(s) de R$ %.2f\n", valores[i], float32(v)/100)
		} else {
			if i == 6 {
				fmt.Println("MOEDAS:")
			}
			fmt.Printf("%v moeda(s) de R$ %.2f\n", valores[i], float64(v)/100)
		}
	}
    //fmt.Println(valores)
}
