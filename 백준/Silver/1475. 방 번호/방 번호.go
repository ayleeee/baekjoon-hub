package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var room int
	fmt.Fscan(reader, &room)

	var arr = [10]int{0}

	for {
		arr[room%10]++
		if room/10 == 0 {
			break
		}
		room /= 10
	}

	var count int = 0

	for i := 0; i < 10; i++ {
		if i != 9 && i != 6 {
			if count < arr[i] {
				count = arr[i]
			}
		}
	}

	if count > (arr[6]+arr[9]+1)/2 {
		fmt.Fprint(writer, count)
	} else {
		fmt.Fprint(writer, (arr[6]+arr[9]+1)/2)
	}
}
