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

	var n int
	fmt.Fscanln(reader, &n)

	var cnt int = 0

	for i := 0; i < n; i++ {
		var str string
		fmt.Fscanln(reader, &str)

		//a~z까지 0으로 세팅된 어레이를 만듦
		//그리고 알파벳이 나올 때 +1을 함
		//앞과 뒤가 다른 경우만 체크해서 값이 1이면 no, 값이 0이면 yes
		// h a p p y

		alpha := make([]bool, 26)

		firstChar := int(str[0]) - 97
		alpha[firstChar] = true

		for j := 1; j < len(str); j++ {
			charnum := int(str[j]) - 97
			if str[j] != str[j-1] && alpha[charnum] == true {
				cnt += 1
				break
			} else {
				alpha[charnum] = true
			}
		}
	}
	fmt.Fprintln(writer, n-cnt)
}
