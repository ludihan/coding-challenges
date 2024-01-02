package main

import (
    "fmt"
)

func main() {
    var X, Y float64
    fmt.Scanf("%v\n%v", &X, &Y)
    fmt.Printf("%.3f km/l\n", X / Y)
}
