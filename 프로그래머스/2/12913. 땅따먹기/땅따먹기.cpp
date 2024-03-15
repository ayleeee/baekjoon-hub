#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int solution(vector<vector<int>> land)
{

    int answer = 0;
    // dp 선언
    vector<vector<int>> dp(land.size(), vector<int>(4));
    
    // 첫번째 행은 land의 첫번째 행과 동일하게 초기화
    for(int i=0;i<4;i++){
        dp[0][i]=land[0][i];
    }
    
    // 두번째 행부터 계산 시작
    for(int i=1;i<land.size();i++){
        for(int j=0;j<4;j++){
            int mx = 0;
            // 최대값 찾기
            for(int k=0;k<4;k++){
                // 현재 열과 같은 열은 패스
                if(k==j) continue;
                mx = max(mx, dp[i-1][k]);
            }
            //　dp 값 업데이트
            dp[i][j]=land[i][j]+mx;
        }
    }
                        
    answer = *max_element(dp.back().begin(), dp.back().end());
    return answer;
}