#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char,int> mp;
    
    for(int i=0;i<skill.size();i++){
        mp.insert({skill[i],i});
    }
    
    for(int i=0;i<skill_trees.size();i++){
        bool check = true;
        int counter = 0;
        
        for(int j=0;j<skill_trees[i].size();j++){
            // 스킬 트리에 존재하는 문자?
            if(mp.find(skill_trees[i][j])!=mp.end()){
                // 선행 순서와 일치하는 가?
                if(mp[skill_trees[i][j]]!=counter){
                    check = false;
                    break;
                }else{
                    counter++;
                }
            }
        }
        if(check){
            answer++;
        }
    }
    return answer;
}