#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
최대한 많은 부서의 물품을 구매해 줄 수 있도록 한다.
물품을 구매할 때는 -> 각 부서가 신청한 금액 모두 지원
1000원 신청 시 -> 정확하게 1000원

최대 몇 곳에 지원해 줄 수 있는가?
*/

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    // 1 2 3 4 5
    bool flag = true;
    
    for(int i=0;i<d.size();i++){
        if(budget-d[i]>=0){
            budget-=d[i];
            answer++;
        }else{
            break;
        }
    }
    
    return answer;
}