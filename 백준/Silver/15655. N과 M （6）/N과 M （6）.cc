#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;
int arr[9];
int vec[9];
bool visited[9];

void Print(int idx,int cnt){
    if(idx==m){
        for(int i=0;i<m;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=cnt;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            vec[idx]=arr[i];
            Print(idx+1,i+1);
            visited[i]=false;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    Print(0,0);
}
