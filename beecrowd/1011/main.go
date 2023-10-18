package main

import (
	"fmt"
	"math"
)

func main() {
    var R float64
    fmt.Scanf("%v\n", &R)
    fmt.Printf("VOLUME = %.3f\n",(4.0/3) * 3.14159 * math.Pow(R, 3) )
}
