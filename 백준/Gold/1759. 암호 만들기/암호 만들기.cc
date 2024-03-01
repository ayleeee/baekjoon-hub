/*
 암호 만들기
(1) 최소 1개의 모음, 2개의 자음
(2) 알파벳이 암호에서 증가하는 순서로 배열되었을 것.

 두 정수 : l,c
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L,C,vo,co;
// 입력
vector<char> ip;
vector<char> alpha;

void FindCode(int start, int cnt){
    // 종료 조건
    if(cnt==L){
        vo = 0;
        co = 0;
        for(int i=0;i<alpha.size();i++){
            if(alpha[i]=='a'||alpha[i]=='e'||alpha[i]=='i'||alpha[i]=='o'||alpha[i]=='u'){
                vo++;
            }else{
                co++;
            }
        }
        if(vo>=1 && co>=2){
            for(int i=0;i<alpha.size();i++){
                cout<<alpha[i];
            }
            cout<<"\n";
        }
    }
    
    for(int i=start;i<ip.size();i++){
        alpha.push_back(ip[i]);
        FindCode(i+1,cnt+1);
        alpha.pop_back();
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>L>>C;
    ip.resize(C);
    for(int i=0;i<C;i++){
        cin>>ip[i];
    }
    
    sort(ip.begin(),ip.end());
    FindCode(0,0);
}
