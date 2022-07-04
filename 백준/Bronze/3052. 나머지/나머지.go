package main

import (
	"bufio"
	"fmt"
	"os"
)

func count(arr []int) {
	var elem []int
	for i := 0; i < len(arr); i++ {
		var num = arr[i] % 42
		if !isNumber(elem, num) {
			elem = append(elem, num)
		}
	}
	fmt.Println(len(elem))
}

func isNumber(arr []int, num int) bool {
	for _, i := range arr {
		if num == i {
			return true
		}
	}
	return false
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	arr := make([]int, 10)
	for i := 0; i < 10; i++ {
		fmt.Fscanln(reader, &arr[i])
	}

	count(arr)

}
