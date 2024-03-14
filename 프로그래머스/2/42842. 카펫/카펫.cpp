#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> divisor;
    divisor.push_back(1);
    int total = brown+yellow;
    for(int i=2;i<=sqrt(total);i++){
        if(total%i==0){
            divisor.push_back(i);
        }
    }
    for(int i=(int)divisor.size()-1;i>=0;i--){
        divisor.push_back(total/divisor[i]);
    }
    
    int idx = (int)divisor.size()-1;
    for(int i=1;i<(int)divisor.size()/2;i++){
        if((divisor[i]-2)*(divisor[idx-i]-2)==yellow){
            answer.push_back(divisor[idx-i]);
            answer.push_back(divisor[i]);
            break;
        }
    }
    return answer;
}