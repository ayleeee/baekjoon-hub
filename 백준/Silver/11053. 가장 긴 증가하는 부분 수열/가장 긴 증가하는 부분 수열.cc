#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int N;
int arr[1001];
int dp[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<=N;i++){
        dp[i]=INT_MIN;
    }
    
    dp[0]=0;
    arr[0]=0;
    
    for(int i=1;i<=N;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    
    int ans = 0;
    for(int i=0;i<=N;i++){
        ans = max(ans,dp[i]);
    }
    cout<<ans;
}
