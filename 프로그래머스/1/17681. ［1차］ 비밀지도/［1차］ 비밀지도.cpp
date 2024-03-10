#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<arr1.size(); i++){
        string str="";
        for(int j=n-1; j>=0; j--){
            int temp = (arr1[i] >> j) & 1;
            str += to_string(temp);
        }

        string str2 = "";
        for(int j=n-1; j>=0; j--){
            int temp2 = (arr2[i] >> j) & 1;
            str2 += to_string(temp2);
        }

        string ans = "";
        for(int k=0; k<str.size(); k++){
            if(str[k]=='1' || str2[k]=='1'){
                ans += "#";
            } else {
                ans += " ";
            }
        }
        answer.push_back(ans);
    }

    return answer;
}