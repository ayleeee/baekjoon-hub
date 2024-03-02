#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char words[5];
vector<char> voc;
vector<string> result;

void dfs(int len, int depth){
    if(len==depth){
        string str = "";
        for(int i=0;i<voc.size();i++){
            str+=voc[i];
        }
        result.push_back(str);
        return;
    }
    
    for(int i=0;i<5;i++){
        voc.push_back(words[i]);
        dfs(len,depth+1);
        voc.pop_back();
    }
}

int solution(string word) {
    int answer = 0;
    
    words[0]='A';
    words[1]='E';
    words[2]='I';
    words[3]='O';
    words[4]='U';
    
    
    
    for(int i=1;i<=5;i++){
        dfs(i,0);
    }
    
    sort(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        if(result[i]==word){
            answer=i+1;
            break;
        }
    }
    return answer;
}