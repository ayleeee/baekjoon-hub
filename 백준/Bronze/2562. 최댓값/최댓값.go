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

	var temp int = 0
	var idx int = 0
	for i := 1; i <= 9; i++ {
		var elem int
		fmt.Fscanln(reader, &elem)
		if temp < elem {
			temp = elem
			idx = i
		}
	}
	fmt.Fprintln(writer, temp)
	fmt.Fprintln(writer, idx)
}
