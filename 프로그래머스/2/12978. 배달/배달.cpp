#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int,int> edge;
vector<vector<edge>> mlist;
vector<int> mdistance;
vector<bool> visited;
priority_queue<edge,vector<edge>,greater<edge>> que;

int solution(int N, vector<vector<int> > road, int K) {
    mdistance.resize(N+1);
    std::fill(mdistance.begin(), mdistance.end(),INT_MAX);
    visited.resize(N+1);
    std::fill(visited.begin(),visited.end(),false);
    mlist.resize(N+1);
    
    for(int i=0;i<road.size();i++){
        int f = road[i][0];
        int s = road[i][1];
        int t = road[i][2];
        mlist[f].push_back({s,t});
        mlist[s].push_back({f,t});
    }
    
    que.push(make_pair(0,1));
    mdistance[1]=0;
    
    while(!que.empty()){
        edge current = que.top();
        que.pop();
        int c_v = current.second;
        if(visited[c_v]) continue;
        visited[c_v]=true;
        
        for(int i=0;i<mlist[c_v].size();i++){
            edge temp = mlist[c_v][i];
            int next = temp.first;
            int value = temp.second;
            
            if(mdistance[next]>mdistance[c_v]+value){
                mdistance[next]=value+mdistance[c_v];
                que.push(make_pair(mdistance[next],next));
            }
        }
    }
    
    int counter = 0;
    
    for(int i=1;i<=N;i++){
        if(mdistance[i]<=K){
            counter++;
        }
    }
    return counter;
}