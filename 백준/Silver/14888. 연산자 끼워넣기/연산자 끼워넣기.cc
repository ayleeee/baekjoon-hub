#include <iostream>
using namespace std;

int n;
int arr[11];
int operators[4];
int mmin = 1000000001;
int mmax = -1000000001;

void Calc(int res, int idx){
    if(idx==n){
        if(res>mmax){
            mmax = res;
        }
        if(res<mmin){
            mmin = res;
        }
        return;
    }
    
    for(int i=0;i<4;i++){
        if(operators[i]>0){
            operators[i]--;
            if(i==0){
                Calc(res+arr[idx],idx+1);
            }else if(i==1){
                Calc(res-arr[idx],idx+1);
            }else if(i==2){
                Calc(res*arr[idx],idx+1);
            }else{
                Calc(res/arr[idx],idx+1);
            }
            operators[i]++;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // 덧셈, 뺄셈, 곱셈, 나눗셈
    for(int i=0;i<4;i++){
        cin>>operators[i];
    }
    
    Calc(arr[0],1);
    
    cout<<mmax<<"\n";
    cout<<mmin;
    
}
