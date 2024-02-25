package main

import (
	"fmt"
	"time"
)

func timeTrack(start time.Time, name string) {
    elapsed := time.Since(start)
    fmt.Printf("%s took %s\n", name, elapsed)
}

func main() {
    defer timeTrack(time.Now(), "Program")
	var N, counter = 0, 1
	var X, Y, totalX, totalY int
    var prints []string

	for  {
        fmt.Scan(&N)

        if N == 0 {
            break
        }

        var consumos [201]int
        totalX, totalY = 0, 0
		for i := 0; i < N; i++ {
			fmt.Scan(
                &X,
                &Y,
			)
			totalX += X
			totalY += Y
			consumos[Y/X] += X
		}

		prints = append(prints, fmt.Sprintf("Cidade# %d:\n", counter))
		for i := 0; i < 201; i++ {
            if consumos[i] > 0 {
                prints = append(prints, fmt.Sprintf(
                    "%d-%d ",
                    consumos[i],
                    i,
                ))
            }
		}

		prints = append(prints, fmt.Sprintf(
			"\nConsumo medio: %.2f m3.\n\n",
            float64(int((float64(totalY) / float64(totalX)) * 100)) / 100.0,
		))
		counter++
	}
    for _, v := range prints {
        fmt.Print(v)
    }
}
