package main

import (
	"fmt"
)

func main() {
	var segundos int
	var tempo = [3]int{60 * 60, 60, 1}
	fmt.Scan(&segundos)
	for i, v := range tempo {
		tempo[i] = segundos / v
		segundos -= tempo[i] * v
	}
	fmt.Printf("%d:%d:%d\n", tempo[0], tempo[1], tempo[2])
}
