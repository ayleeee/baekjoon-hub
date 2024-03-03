/*
 서로 다른 N개의 자연수의 합 = S
 N의 최댓값은?
 
 1+2+3+...
 
 이런식으로 더해 나가기
 
 */
#include <iostream>
using namespace std;

long long S;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>S;
    
    long long sum = 0;
    long long num = 1;
    int cnt = 0;
    
    while(true){
        sum+=num;
        cnt++;
        
        if(sum>S){
            cnt--;
            break;
        }
        num++;
    }
    cout<<cnt;
    return 0;
}
