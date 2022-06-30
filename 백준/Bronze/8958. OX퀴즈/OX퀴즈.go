package main

import (
	"bufio"
	"fmt"
	"os"
)

func oxox(temp string) int {
	var sum int = 0
	var score int = 1
	for i := 0; i < len(temp); i++ {
		if temp[i] == 'O' {
			sum += score
			score += 1
		} else {
			score = 1
		}
	}
	return sum
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscanln(reader, &n)

	for i := 0; i < n; i++ {
		var temp string
		fmt.Fscanln(reader, &temp)
		fmt.Fprintln(writer, oxox(temp))

	}

}
