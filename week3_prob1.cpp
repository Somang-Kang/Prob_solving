#include <iostream>
#include <queue>
using namespace std;

int arr[50001][50001];
queue<bool> q;
bool visited[50001]={false,};
vector<int> neighbors[50001];
vector<int> dir;
int str_count = 0;

void DFS(int v){
    visited[v] = true;
    str_count += dir[v];
    q.pop();
    while(!q.empty()){
        for(int i=0;i<neighbors[v].size();i++){
            if(visited[neighbors[v][i]]==false) DFS(neighbors[v][i]);
        }
    }

}

int main(){
    int testcase;
    cin>>testcase;

    while(testcase--){
        int dir_num;
        cin>>dir_num;
        for(int i =0;i<dir_num;i++){
            int par,chi;
            cin>>par>>chi;
            arr[par][chi]=1;
            arr[chi][par]=1;
            neighbors[par].push_back(chi);
            if(par==1){q.push(par);}
            q.push(chi);
        }

        dir.push_back(0);
        for(int i=0;i<dir_num;i++){
            string dir_name;
            cin>>dir_name;
            dir.push_back(dir_name.size()+1);
        }

        for(int i =0;i<dir_num;i++){
            DFS(i+1);
            str_count -=1;
            cout<<str_count<<endl;
            str_count = 0;
        }


    }

}