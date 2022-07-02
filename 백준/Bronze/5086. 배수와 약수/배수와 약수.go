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

	var x, y int

	for {
		fmt.Fscan(reader, &x, &y)
		if x == 0 && y == 0 {
			break
		}

		if y%x == 0 {
			fmt.Fprintln(writer, "factor")
		} else if x%y == 0 {
			fmt.Fprintln(writer, "multiple")
		} else {
			fmt.Fprintln(writer, "neither")
		}
	}

}
