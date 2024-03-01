/*
 말은 상하좌우로 인접한 네 칸 중 한 칸으로 이동 가능
 새로 이동한 칸에 적혀 있는 알파벳은 지금까지 지나온
 모든 칸에 적혀 있는 알파벳과는 달라야 한다.
 
 즉, 같은 알파벳이 적힌 칸은 지날 수 없다.
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char alpha[21][21];
bool visitied[26];
int R,C;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

int ans = 0;

void dfs(int x, int y, int cnt){
    ans = max(ans,cnt);
    for(int i=0;i<4;i++){
        int nx = dx[i]+x;
        int ny = dy[i]+y;
        if(nx>=0 && ny>=0 && nx<R && ny<C){
            if(!visitied[alpha[nx][ny]-'A']){
                visitied[alpha[nx][ny]-'A'] = true;
                dfs(nx,ny,cnt+1);
                visitied[alpha[nx][ny]-'A'] = false;
            }
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>R>>C;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>alpha[i][j];
        }
    }
    visitied[alpha[0][0]-'A']=true;
    dfs(0,0,1);
    cout<<ans;
}
