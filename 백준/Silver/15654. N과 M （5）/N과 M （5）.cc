#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> vec;
int ans[9];
vector<bool> visited;

void Print(int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=0;i<n;i++){
        if(visited[i]){
            continue;
        }
        visited[i]=true;
        ans[cnt]=vec[i];
        Print(cnt+1);
        visited[i]=false;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    visited.resize(9,false);
    sort(vec.begin(),vec.end());
    Print(0);
}
