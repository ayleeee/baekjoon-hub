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

	var num int
	fmt.Fscanln(reader, &num)

	arr := make([]int, 10)
	for i := 0; i < num; i++ {
		for j := 0; j < 10; j++ {
			fmt.Fscan(reader, &arr[j])
		}
		sort.Ints(arr)
		fmt.Fprintln(writer, arr[7])
	}
}
