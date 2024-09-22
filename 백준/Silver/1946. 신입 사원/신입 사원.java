import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

class new_emp implements Comparable<new_emp> {
    int doc;
    int interview;

    new_emp(int doc, int interview) {
        this.doc = doc;
        this.interview = interview;
    }

    @Override
    public int compareTo(new_emp o) {
        return Integer.compare(this.doc, o.doc);
    }
}

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    static int t, n;

    public static void main(String[] args) throws IOException {
        t = Integer.parseInt(br.readLine());

        // 각 테스트 케이스를 처리하는 반복문
        for (int testCase = 0; testCase < t; testCase++) {
            n = Integer.parseInt(br.readLine());
            ArrayList<new_emp> arr = new ArrayList<>();

            // 각 지원자의 서류와 면접 등수 입력 받기
            for (int i = 0; i < n; i++) {
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                arr.add(new new_emp(a, b));
            }

            // 서류 등수로 정렬
            Collections.sort(arr);

            int ans = 1; // 첫 번째 지원자는 무조건 합격
            int min = arr.get(0).interview; // 첫 번째 지원자의 면접 등수를 최소로 설정

            // 2번째 지원자부터 면접 등수를 비교하며 최소값 갱신
            for (int i = 1; i < n; i++) {
                if (arr.get(i).interview < min) {
                    ans++;
                    min = arr.get(i).interview;
                }
            }

            // 결과 출력
            System.out.println(ans);
        }
    }
}
