#include <iostream>
#include <vector>
using namespace std;

int n,m;
bool visited[9];
vector<int> vec;

void Print(int num, int cnt){
    if(cnt==m){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=num;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            vec.push_back(i);
            Print(i+1,cnt+1);
            visited[i]=false;
            vec.pop_back();
            
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>m;
    Print(1,0);
}
