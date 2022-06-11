package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {

	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var a = 100
	var b = 100

	var n, ascore, bscore int

	fmt.Fscanln(reader, &n)

	for i := 0; i < n; i++ {
		fmt.Fscanln(reader, &ascore, &bscore)
		if ascore > bscore {
			b -= ascore
		} else if ascore < bscore {
			a -= bscore
		}
	}
	fmt.Println(a)
	fmt.Println(b)
}
