import java.io.*;

/*
첫 접근 :
-> 팩토리얼 계산을 하고 10을 나누면서 0을 세는 방법
비효율적인 접근이라는 것을 알면서도 방법이 생각나지 않았음


팩토리얼의 끝 0의 개수를 세는 방법
(1) 팩토리얼의 곱셈에서 10이 몇 번이나 인수로 포함되는 지
(2) 10 = 2 * 5, 팩토리얼에서는 항상 2의 인수보다 5의 인수가 적기 때문에
끝 0의 개수는 5가 인수로 포함되는 횟수에 의해 결정됨

[1] n!에 포함된 5의 배수의 개수
[2] n!에 포함된 25의 배수의 개수
[3] n!에 포함된 125의 배수의 개수
[4] 이 과정을 나누는 결과가 0이 될 때까지 반복

 */

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        for(int i=0;i<t;i++){
            int number = Integer.parseInt(br.readLine());
            int zeros = 0;
            int divisor = 5;

            while(number/divisor>0){
                zeros += number/divisor;
                divisor*=5;
            }
            bw.write(zeros+"\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
