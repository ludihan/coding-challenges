package main

import (
	"fmt"
)

func main() {
	var A, B, C, D int
	fmt.Scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D)
	fmt.Printf("DIFERENCA = %d\n", A*B-C*D)
}
