import java.io.*;
import java.util.Stack;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(bufferedReader.readLine());
        String ps = "";
        for(int i=0;i<n;i++){
            Stack<Character> stack = new Stack<>();
            ps = bufferedReader.readLine();
            boolean flag = true;
            for(int j=0;j<ps.length();j++) {
                char ch = ps.charAt(j);
                if (ch == '(') {
                    stack.push(ch);
                } else {
                    if (stack.isEmpty()) {
                        flag = false;
                        break;
                    } else {
                        stack.pop();
                    }
                }
            }
            if (!stack.isEmpty()) {
                flag=false;
            }

            if (flag) {
                bufferedWriter.write("YES\n");
            } else {
                bufferedWriter.write("NO\n");
            }
        }
        bufferedWriter.flush();
        bufferedWriter.close();
    }
}
