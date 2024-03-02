#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

bool isPrime(int num){
    if(num<2) return false;
    int rnge = (int)sqrt(num);
    for(int i=2;i<=rnge;i++){
        if(num%i==0) return false;
    }
    return true;
}


int solution(string numbers) {
    int answer = 0;
    vector<char> vec;
    vector<int> toNum;
    
    for(int i = 0; i < numbers.length(); i++) vec.push_back(numbers[i]);
    sort(vec.begin(), vec.end());
    
    do{
        string str = "";
        for(int i = 0; i < vec.size(); i++){
            str.push_back(vec[i]);
            toNum.push_back(stoi(str));
        }
    }while(next_permutation(vec.begin(), vec.end()));
    
    sort(toNum.begin(), toNum.end());
    toNum.erase(unique(toNum.begin(), toNum.end()), toNum.end());
    
    for(int i = 0; i < toNum.size(); i++)
        if(isPrime(toNum[i])) answer++;
    
    return answer;
}