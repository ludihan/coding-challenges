package main

import (
	"fmt"
	"log"
	"os"
	"os/exec"
	"path/filepath"
	"strconv"
)

func main() {
    var firstDir, lastDir, tmp string
    entries, _ := os.ReadDir("./")
    for _, v := range entries {
        if !v.IsDir() {
            lastDir = tmp
        }

        if firstDir == "" {
            if v.IsDir() {
                firstDir = v.Name()
            }
        }

        tmp = v.Name()
    }

    var ifirstDir, ilastDir int
    ifirstDir, _ = strconv.Atoi(firstDir)
    ilastDir, _ = strconv.Atoi(lastDir)

	fname, err := exec.LookPath("go")
    if err != nil {
        log.Fatal(err)
    }
    fname, err = filepath.Abs(fname)


	for i := ifirstDir; i <= ilastDir; i++ {
		fmt.Println(i)
		cmd := exec.Command(fname, "fmt", fmt.Sprintf("%d/main.go", i))
		if err := cmd.Run(); err != nil {
			log.Fatal(err)
		}
	}
}
