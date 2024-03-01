#include <iostream>
#include <algorithm>
using namespace std;

int arr[21];
int ans;
int n,s;
/*
 n이 되는 부분 수열 구하기
 */

void dfs(int idx, int sum){
    if(idx==n) return;
    if(sum+arr[idx]==s) ans++;
    
    // 해당 숫자가 안 들어갈 때
    dfs(idx+1,sum);
    // 해당 숫자가 들어갈 때
    dfs(idx+1,sum+arr[idx]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>s;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    dfs(0,0);
    cout<<ans;
    return 0;
    
}
