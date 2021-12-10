//
// Created by 강소망 on 2021/10/15.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> v[101];


class Ball{
public:
    bool isVisited[101] = {false,};
    int cnt = -1;

    void DFS(int n){
        isVisited[n] = true;
        cnt++;

        for(int i =0;i<v[n].size();i++){
            if(isVisited[v[n][i]]== false){
                DFS(v[n][i]);
            }
        }
    }

};



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N,M;
        cin>>N>>M;
        for(int i = 0;i<M;i++){
            int n,m;
            cin>>n>>m;
            v[n].push_back(m);


        }

        for(int i = 1;i<=N;i++){
            Ball* ball = new Ball();
            ball->DFS(i);
            cout<<ball->cnt<<" ";
        }
        cout<<endl;
        for(int i=1;i<N+1;i++){
            v[i].clear();
        }
    }
}