/*
 도시를 이동하는 가중치 -> 변수 cost 에 저장
 종료 조건
 (1) 모든 도시를 방문 했고
 (2) 다시 처음의 위치로 돌아온 경우
 */

#include <iostream>
#include <algorithm>
using namespace std;

int city[11][11];
bool check[11];
int m = 987654321;
int n;

// 시작점, 현재위치, 현재까지 지나간 마을의 수, 비용
void dfs(int start, int atHere, int depth, int cost){
    // 종료 조건
    if(depth==n){
        if(city[atHere][start]==0)return;
        if(m>cost+city[atHere][start]){
            m =cost+city[atHere][start];
        }
        return;
    }
    
    for(int i=0;i<n;i++){
        if(!check[i] && city[atHere][i]>0){
            check[i] = true;
            dfs(start,i,depth+1,cost+city[atHere][i]);
            check[i]=false;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>city[i][j];
        }
    }
    
    // 각각의 도시에서 시작하는 경우
    for(int o=0;o<n;o++){
        check[o]=true;
        // 시작점, 현재위치, 현재까지 지나간 마을의 수, 비용
        dfs(o,o,1,0);
        check[o]=false;
    }
    cout<<m;
}
