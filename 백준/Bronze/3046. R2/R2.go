package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var r1, s int
	reader := bufio.NewReader(os.Stdin)
	fmt.Fscan(reader, &r1, &s)

	// s = (r1+r2)/2
	// 2s = r1+r2
	// 2s-r1 = r2

	var res = 2*s - r1
	fmt.Println(res)

}
