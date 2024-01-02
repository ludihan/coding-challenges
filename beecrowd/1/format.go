package main

import (
	"fmt"
	"log"
	"os/exec"
	"path/filepath"
)

func main() {
    fname, err := exec.LookPath("go")
    if err == nil {
        fname, err = filepath.Abs(fname)
    }
    if err != nil {
        log.Fatal(err)
    }
    for i := 1000; i < 1020; i++ {
        fmt.Println(i)
        cmd := exec.Command(fname, "fmt", fmt.Sprintf("%d/main.go", i))
        if err := cmd.Run(); err != nil {
            log.Fatal(err)
        }
    }
}
