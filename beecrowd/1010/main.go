package main

import (
    "fmt"
)

func main() {
    var c1, n1, c2, n2 int
    var v1, v2 float64
    fmt.Scanf("%v %v %v\n", &c1, &n1, &v1)
    fmt.Scanf("%v %v %v", &c2, &n2, &v2)
    fmt.Printf("VALOR A PAGAR: R$ %.2f\n", (float64(n1) * v1) + (float64(n2) * v2))
}
