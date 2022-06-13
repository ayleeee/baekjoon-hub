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

	var a, b int
	fmt.Fscanln(reader, &a, &b)

	var sum = 0
	num := make([]int, 1)
	for i := 1; i <= b; i++ {
		for j := 1; j <= i; j++ {
			num = append(num, i)
		}
	}

	for i := a; i <= b; i++ {
		sum += num[i]
	}
	fmt.Fprintln(writer, sum)
}