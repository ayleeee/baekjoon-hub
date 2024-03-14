#include <string>
#include <vector>

using namespace std;

int counter(int n){
    int cnt = 0;
    for(int i=0;n>0;i++){
        if(n%2==1) cnt++;
        n/=2;
    }
    return cnt;
}

int solution(int n) {
    int temp = counter(n);
    
    while(true){
        n++;
        if(temp == counter(n)){
            break;
        }
    }
    return n;
}