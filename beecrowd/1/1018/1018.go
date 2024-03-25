package main

import (
	"fmt"
)

func main() {
	var dinheiro int
	fmt.Scan(&dinheiro)
	dividirDinheiro(dinheiro)
}

func dividirDinheiro(dinheiro int) {
	var notas = [...]int{100, 50, 20, 10, 5, 2, 1}
	var quantidade int
	fmt.Println(dinheiro)
	for _, v := range notas {
		quantidade = dinheiro / v
		dinheiro -= quantidade * v
		fmt.Printf("%d nota(s) de R$ %d,00\n", quantidade, v)
	}
}
