package main

import (
	"bufio"
	"fmt"
	"os"
)

var arr []int

func calculate(a, b int) int {
	return arr[b] - arr[a-1]
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var x, y int
	fmt.Fscan(reader, &x, &y)
	arr = append(arr, 0)

	for i := 1; i <= x; i++ {
		var elem int
		fmt.Fscan(reader, &elem)
		arr = append(arr, arr[i-1]+elem)
	}

	for i := 1; i <= y; i++ {
		var a, b int
		fmt.Fscan(reader, &a, &b)
		fmt.Fprintln(writer, calculate(a, b))
	}
}
