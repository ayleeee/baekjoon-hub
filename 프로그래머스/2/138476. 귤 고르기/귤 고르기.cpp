#include <string>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;
bool compare(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    for(int i=0;i<tangerine.size();i++){
        m[tangerine[i]]++;
    }
    vector<pair<int,int>> vec(m.begin(),m.end());
    sort(vec.begin(),vec.end(),compare);
   
    for(int i=0;i<vec.size();i++){
        int val = vec[i].second;
        k-=val;
        answer++;
        if(k<=0){
            break;
        }
    }
    return answer;
}