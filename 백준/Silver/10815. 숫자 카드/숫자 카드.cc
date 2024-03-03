#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M;
vector<int> vec;
vector<int> howMany;

int bs(int number){
    int start = 0;
    int end = N-1;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(vec[mid]==number){
            return 1;
        }else if(vec[mid]>number){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    // -10 2 3 6 10
    
    cin>>M;
    
    for(int i=0;i<M;i++){
        int val;
        cin>>val;
        howMany.push_back(val);
    }
    
    for(int i=0;i<M;i++){
        cout<<bs(howMany[i])<<" ";
    }
}
