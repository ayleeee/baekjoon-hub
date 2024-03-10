#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
/*

실패율 = 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도달한 플레이어의 수

전체 스테이지의 개수 N
게임을 이용하는 사용자가 현재 멈춰있는 스테이지의 번호가 담긴 배열 stages
-> 각 자연수는 사용자가 현재 도전 중인 스테이지의 번호

실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 배열 return

입출력 1번
stages.length = 8
8명의 도전자

1 2 2 2 3 3 4 6
1번 스테이지 : 1/8
2번 스테이지 : 3/7
3번 스테이지 : 2/4
4번 스테이지 : 1/2
5번 스테이지 : 0/1

*/
bool compare(const pair<float,int>& a, const pair<float,int>& b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<pair<float,int>> answer;
    vector<int> ans;
    sort(stages.begin(),stages.end());
    int stage = 1;
    int tempLen = stages.size();
    int idx = 0;
    
    while(stage<=N){
        int counter = 0;
    
        for(int j=0;j<stages.size();j++){
            if(stages[j]==stage){
                counter++;
            }
        }
        
        if(counter==0){
            answer.push_back({0,stage});
        }else{
            double res = static_cast<float>(counter) / tempLen;
            answer.push_back({res,stage});
            tempLen -= counter;
        } 
        stage++;
    }
    
    sort(answer.begin(),answer.end(),compare);
    
    for(int i=answer.size()-1;i>=0;i--){
        //cout<<answer[i].second<<" ";
        ans.push_back(answer[i].second);
    }
    return ans;
}