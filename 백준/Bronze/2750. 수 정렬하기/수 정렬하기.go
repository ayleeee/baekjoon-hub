package main

import (
	"bufio"
	"fmt"
	"os"
)

var arr []int

func sort(arr []int) {
	var size int = len(arr)
	for i := size - 1; i > 0; i-- {
		for j := 0; j < i; j++ {
			if arr[j] < arr[j+1] {
				temp := arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp
			}
		}
	}
	for i := size - 1; i >= 0; i-- {
		fmt.Println(arr[i])
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscanln(reader, &n)

	for i := 0; i < n; i++ {
		var elem int
		fmt.Fscanln(reader, &elem)
		arr = append(arr, elem)
	}

	sort(arr)

}
