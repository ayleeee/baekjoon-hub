import java.io.*;
import java.util.StringTokenizer;

public class Main {
    /*
    (1) 2차원 배열
    (2) 1부터 max까지 돌면서 count
     */

    static int n; // 가로 세로
    static int[][] area;
    static boolean[][] visited;
    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};
    static StringTokenizer st;
    static int count;
    static int ans = 1; // 아무곳도 물에 안잠길때
    static int mx = Integer.MIN_VALUE; 

    public static void dfs(int x, int y, int height) {
        visited[x][y] = true;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if ((nx >= 0 && nx < n) && (ny >= 0 && ny < n) && !visited[nx][ny] && area[nx][ny] > height) {
                dfs(nx, ny, height);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        n = Integer.parseInt(br.readLine());
        area = new int[n][n];

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                area[i][j] = Integer.parseInt(st.nextToken());
                mx = Math.max(area[i][j], mx);
            }
        }

        for (int h = 1; h <= mx; h++) {
            visited = new boolean[n][n];
            count = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (area[i][j] > h && !visited[i][j]) {
                        count++;
                        dfs(i, j, h);
                    }
                }
            }
            ans = Math.max(ans, count);
        }
        
        bw.write(String.valueOf(ans));
        bw.newLine();
        
        bw.flush();
        br.close();
        bw.close();
    }
}
