package main

import (
	"fmt"
)

func main() {
	var horas, velMed int
	fmt.Scanf("%d\n%d", &horas, &velMed)
	fmt.Printf("%.3f\n", float64((horas*velMed))/12.0)
}
