package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var num int
	var sum = 0
	var smaller = 101 

	reader := bufio.NewReader(os.Stdin)
	for i:=0;i<7;i++{
		fmt.Fscan(reader, &num)
		if(num%2!=0){
			sum+=num
			if(num<smaller){
				smaller=num;
			}
		}
	}

	if sum==0 {
		fmt.Println(-1)
	}else{
		fmt.Println(sum)
		fmt.Println(smaller)
	}
}