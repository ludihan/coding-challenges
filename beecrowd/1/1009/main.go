package main

import (
    "fmt"
)

func main() {
    var nome string
    var salario,venda float64
    fmt.Scanf("%s\n%v\n%v", &nome, &salario, &venda)
    fmt.Printf("TOTAL = R$ %.2f\n", salario + (venda * 0.15))
}
