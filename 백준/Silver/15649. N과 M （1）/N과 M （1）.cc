#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> vec;
bool visited[9];

void Print(int cnt){
    if(cnt==m){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            vec.push_back(i);
            Print(cnt+1);
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
    Print(0);
}
