package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func binarySearch(arr []int, elem int) int {
	var start int
	var end int

	start = 0
	end = len(arr) - 1

	for start <= end {
		mid := (start + end) / 2
		if arr[mid] > elem {
			end = mid - 1
		} else if arr[mid] < elem {
			start = mid + 1
		} else {
			return 1
		}
	}
	return 0
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscanln(reader, &n)

	arr := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &arr[i])
	}
	fmt.Fscanln(reader)

	sort.Ints(arr)

	var m int
	fmt.Fscanln(reader, &m)

	for i := 0; i < m; i++ {
		var elem int
		fmt.Fscan(reader, &elem)
		fmt.Fprintln(writer, binarySearch(arr, elem))
	}
}
