#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dw;
vector<int> ans;
int sum = 0;
int N = 9;
int mx = 100;

void FindDw(int cnt, int res){
    if(res==100 && cnt==7){
        sort(ans.begin(),ans.end());
        for(int i=0;i<7;i++){
            cout<<ans[i]<<"\n";
        }
        exit(0);
    }
    
    for(int i=cnt;i<dw.size();i++){
        ans.push_back(dw[i]);
        FindDw(cnt+1,res+dw[i]);
        ans.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i=0;i<N;i++){
        int height;
        cin>>height;
        dw.push_back(height);
    }
    FindDw(0,0);
}
