//
// Created by 강소망 on 2021/09/27.
//

#include <iostream>
#include <vector>
using namespace std;
int map[2001][2001];
bool visited[2001] = {false,};
vector<int> branch;
vector<int> neighbors[2001];
int maxDis =0;
int curmax=0;
int firstmax=0;
int secondmax=0;
void DFS(int x){
    visited[x]=true;
    for(int i =0;i<neighbors[x].size();i++){
        int cur = neighbors[x][i];
        if(visited[cur] == false){
            curmax += map[x][cur];
            DFS(neighbors[x][i]);
        }
        branch.push_back(curmax);
        cout<<"cur is "<<curmax<<endl;
        if(curmax>=firstmax) {
            //secondmax = firstmax;
            firstmax = curmax;
        }
        /*else if(curmax>secondmax){
            secondmax = curmax;
        }*/
        curmax = curmax - map[x][cur];
    }
}

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        DFSClass dfs;
        int num;

        cin>>num;
        int loop = num-1;
        while(loop--){
            int u,v,d;
            cin>>u>>v>>d;
            map[u][v]=d;
            map[v][u]=d;
            dfs.neighbors[u].push_back(v);
            //neighbors[v].push_back(u);
        }
        int branchmax = 0;

        int result = 0;
        vector<int> maxVec;
        for(int j=1;j<=num;j++){

            branchmax = 0;
            dfs.DFS(j);
            int size = dfs.branch.size();
            int curResult = dfs.firstmax + dfs.secondmax;
            if(result<curResult) result = curResult;
            /*for(int i =0;i<size;i++){
                cout<<i<<"is "<<dfs.branch[i]<<endl;
                if(dfs.branch[i]>branchmax && firstmax!=dfs.branch[i]) {
                    branchmax = dfs.branch[i];
                }
            }
            if(j == 1){
                firstmax = branchmax;
            }
            else{
                if(branchmax>firstmax){
                    secondmax = firstmax;
                    firstmax = branchmax;
                }
            }
            cout<<firstmax<<" "<<secondmax<<endl;*/
            dfs.setInit();
        }

        //cout<<firstmax<<" "<<secondmax<<endl;
        //int result = firstmax+secondmax;
        cout<<result;


    }
}