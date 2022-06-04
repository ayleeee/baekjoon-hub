package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var a, b, c int
	reader := bufio.NewReader(os.Stdin)
	fmt.Fscanf(reader, "%d\n%d\n%d\n", &a, &b, &c)

	var arr = make([]int, 10)
	var product = a * b * c

	for true {
		arr[product%10]++
		product /= 10
		if product == 0 {
			break
		}
	}

	for i := range arr {
		fmt.Println(arr[i])
	}

}
