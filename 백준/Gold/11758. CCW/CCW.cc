#include <iostream>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    
    int ccwA = (x1*y2)+(x2*y3)+(x3*y1);
    int ccwB = (x2*y1)+(x3*y2)+(x1*y3);
    
    int result = ccwA-ccwB;
    
    int answer = 0;
    
    if(result==0){
        answer = 0;
    }else if(result<0){
        answer = -1;
    }else{
        answer = 1;
    }
    
    cout<<answer;
}
