package main

import (
	"bufio"
	"fmt"
	"os"
)

func reverse(str string) (result string) {
	for _, v := range str {
		result = string(v) + result
	}
	return
}

func is_palindrome(str string) int {
	if str == reverse(str) {
		return 1
	}
	return 0
}

func main() {
	var word string
	reader := bufio.NewReader(os.Stdin)
	fmt.Fscan(reader, &word)
	fmt.Println(is_palindrome(word))

}
