package main

import (
	"fmt"
)

func main() {
	var numero, horas int
	var valor float64

	fmt.Scanf("%d\n%d\n%f", &numero, &horas, &valor)
	fmt.Printf("NUMBER = %d\n", numero)
	fmt.Printf("SALARY = U$ %.2f\n", float64(horas)*valor)

}
