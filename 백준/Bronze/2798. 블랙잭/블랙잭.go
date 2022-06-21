package main

import (
	"bufio"
	"fmt"
	"os"
)

func blackjack(arr []int, sum int, n int) int {

	var res int = 0
	for i := 0; i < n-2; i++ {
		for j := i + 1; j < n-1; j++ {
			for k := j + 1; k < n; k++ {
				temp := arr[i] + arr[j] + arr[k]
				if temp == sum {
					return temp
				}

				if res < temp && temp < sum {
					res = temp
				}
			}
		}
	}
	return res
}

func main() {

	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n, sum int
	fmt.Fscan(reader, &n, &sum)

	arr := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &arr[i])
	}

	result := blackjack(arr, sum, n)
	fmt.Fprint(writer, result)
}
