package main

import (
	"bufio"
	"fmt"
	"os"
)

func bruteforce(n int) {
	var answer = 0
	for i := 1; i <= n; i++ {
		res := modulo(i)
		res += i
		if res == n {
			answer = i
			break
		}
	}
	fmt.Println(answer)
}

func modulo(n int) int {
	var sum = 0
	for n > 0 {
		var temp = n % 10
		sum += temp
		n = n / 10
	}
	return sum
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscanln(reader, &n)
	bruteforce(n)

}
