package main

import (
	"fmt"
)

func sort(arr []int) {
    for i := 0; i < len(arr); i++ {
        if i < len(arr) - 1 && arr[i] > arr[i+1] {
            tmp := arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = tmp
            sort(arr)
        }
    }
}

func main() {
    var a [3]int
    fmt.Scan(&a[0], &a[1], &a[2])
    for i := len(a) - 1; i >= 0; i-- {
        defer fmt.Println(a[i])
    }
    sort(a[:])
    for _, v := range a {
        fmt.Println(v)
    }
    fmt.Print("\n")
}
