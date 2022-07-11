package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscanln(reader, &n)

	var arr []int
	for i := 0; i < n; i++ {
		var elem int
		fmt.Fscanln(reader, &elem)
		arr = append(arr, elem)
	}

	sort.IntSlice(arr).Sort()
	for i := range arr {
		fmt.Fprintln(writer, arr[i])
	}
}
