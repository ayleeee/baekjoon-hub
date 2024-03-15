#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    int len = cities.size();
    
    // 모든 문자를 소문자로 만듦
    for(int i=0;i<len;i++){
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
    }
    
    // cacheSize가 0이면 전부 5초씩 걸림
    if(cacheSize == 0) return len*5;
    
    vector<string> cache;
    
    for(int i=0;i<len;i++){
        string nowAt = cities[i];
        auto it = find(cache.begin(),cache.end(),nowAt);
        // 캐시에 있음
        if(it!=cache.end()){
            cache.erase(it);
            cache.push_back(nowAt);
            answer++;
        }else{
            if(cache.size()<cacheSize){
                cache.push_back(cities[i]);
            }else{
                cache.erase(cache.begin());
                cache.push_back(cities[i]);
            }
            answer+=5;
        }
    }
    return answer;
}