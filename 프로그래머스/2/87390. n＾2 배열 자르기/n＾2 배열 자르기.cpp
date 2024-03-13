#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
(1,1)(1,2)(1,3)
(2,1)(2,2)(2,3)
(3,1)(3,2)(3,3)

둘 중에 더 큰 것이 해당 값
행 = index/n
열 = index%n
*/

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long int i = left;i<=right;i++){
        int row = i/n;
        int col = i%n;
        
        answer.push_back(max(row,col)+1);
    }
    return answer;
}