package main

import (
	"fmt"
	"log"
)

func main() {
	var n int
	var N, D [2]int
	var operation byte
	for fmt.Scan(&n); n > 0; n-- {
		n, e := fmt.Scanf("%d / %d %c %d / %d", &N[0], &D[0], &operation, &N[1], &D[1])
		if e != nil {
			fmt.Println(n)
			log.Fatalln(e)
		}
		calc(N, D, operation)
	}
}

func calc(N, D [2]int, operation byte) {
	var values [4]int
	var gcd int
	if operation == '+' {
		values[0] = (N[0]*D[1] + N[1]*D[0])
		values[1] = (D[0] * D[1])
	} else if operation == '-' {
		values[0] = (N[0]*D[1] - N[1]*D[0])
		values[1] = (D[0] * D[1])
	} else if operation == '*' {
		values[0] = (N[0] * N[1])
		values[1] = (D[0] * D[1])
	} else if operation == '/' {
		values[0] = (N[0] * D[1])
		values[1] = (N[1] * D[0])
	}

	gcd = findGCD(values[0], values[1])
	values[2] = values[0] / gcd
	values[3] = values[1] / gcd

	for i := 1; i <= 3; i += 2 {
		if values[i] < 0 {
			values[i] = -values[i]
			values[i-1] = -values[i-1]
		}
	}

	fmt.Printf("%d/%d = %d/%d\n",
		values[0],
		values[1],
		values[2],
		values[3],
	)
}

func findGCD(n1, n2 int) int {
	var t int
	for n2 != 0 {
		t = n2
		n2 = n1 % n2
		n1 = t
	}
	return n1
}
