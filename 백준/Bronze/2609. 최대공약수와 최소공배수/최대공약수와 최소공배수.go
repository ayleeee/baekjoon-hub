package main

import (
	"bufio"
	"fmt"
	"os"
)

func gcd(a int, b int) int {
	var n int
	for b != 0 {
		n = a % b
		a = b
		b = n
	}
	return a
}

func main() {

	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	var a int
	var b int
	fmt.Fscanln(reader, &a, &b)
	var res = gcd(a, b)
	fmt.Fprintln(writer, res)
	fmt.Fprintln(writer, a*b/res)

}
