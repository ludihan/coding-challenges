package main

import (
	"fmt"
)

func main() {
	var dias int
	var tempo = [3]int{365, 30, 1}
	fmt.Scan(&dias)
	for i, v := range tempo {
		tempo[i] = dias / v
		dias -= tempo[i] * v
	}
	fmt.Printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", tempo[0], tempo[1], tempo[2])
}
