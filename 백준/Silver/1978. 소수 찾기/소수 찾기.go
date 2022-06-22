package main

import (
	"bufio"
	"fmt"
	"os"
)

func PrimeNumber(arr []int) int {
	var primeNum int = 0

	for i := 0; i < len(arr); i++ {
		if arr[i] > 1 {
			var cnt int = 0
			for j := 2; j < arr[i]; j++ {
				if arr[i]%j == 0 {
					cnt++
				}
			}
			if cnt == 0 {
				primeNum += 1
			}
		}
	}

	return primeNum
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var num int
	fmt.Fscanln(reader, &num)

	arr := make([]int, num)
	for i := 0; i < num; i++ {
		fmt.Fscan(reader, &arr[i])
	}

	result := PrimeNumber(arr)
	fmt.Fprint(writer, result)

}
