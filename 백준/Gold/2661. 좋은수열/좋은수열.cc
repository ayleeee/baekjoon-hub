#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
/*
 (1) 수열이 좋은 지, 나쁜지 판별하는 함수
 -> 마지막 인덱스를 기준으로 길이를 1부터 ~ 수열의 길이/2 까지
 -> 간격을 늘려가면서 체크하기
 (2) 백트래킹을 위한 함수
 */
bool isBad(string str){
    int len = str.length();
    for(int i=1;i<=len/2;i++){
        if(str.substr(len-i,i)==str.substr(len-(i*2),i)){
            return true;
        }
    }
    return false;
}

void FindNumber(int idx, string str){
    if(isBad(str)) return;
    if(idx==N){
        cout<<str;
        exit(0);
    }
    FindNumber(idx+1, str+'1');
    FindNumber(idx+1, str+'2');
    FindNumber(idx+1, str+'3');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N;
    FindNumber(0,"");
}
