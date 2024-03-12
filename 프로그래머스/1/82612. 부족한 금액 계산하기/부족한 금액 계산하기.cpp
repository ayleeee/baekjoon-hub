using namespace std;

/*
원래 이용료 price
놀이기구를 N번째 이용한다면 원래 이용료의 N배 받음
count번 탔을 때, 현재 자신이 가지고 있는 금액에서 얼마가 모자라는지

price -> 놀이기구 이용료
money -> 처음 가지고 있는 돈
count -> 이용 횟수
*/

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for(int i=1;i<=count;i++){
        answer+=(price*i);
    }
    
    answer = answer - money;
    if(answer<0){
        return 0;
    }else{
        return answer;
    }
}