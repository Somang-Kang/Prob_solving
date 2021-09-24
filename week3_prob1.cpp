/*
#include <iostream>
#include <queue>
#include <string>
using namespace std;

//int arr[50001][50001];
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
            //arr[par][chi]=1;
            //arr[chi][par]=1;
            neighbors[par].push_back(chi);
            if(i==0){q.push(par);}
            q.push(chi);
        }

        dir.push_back(0);
        for(int i=0;i<dir_num;i++){
            string dir_name;
            cin>>dir_name;
            int dir_size = dir_name.size()+1;
            dir.push_back(dir_size);
        }

        for(int i =0;i<dir_num;i++){
            DFS(i+1);
            str_count -=1;
            cout<<str_count<<endl;
            str_count = 0;
        }


    }

}*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    int testcase;
    cin>>testcase;

    while(testcase--){
        int dir_num;
        cin >> dir_num;
        int vec_size = dir_num+1;
        vector<int> pair(vec_size);
        pair[0] = 0;
        //int pair[50001]; //짝
        for (int i = 0; i < dir_num-1; i++) {
            int par, chi;
            cin >> par >> chi;
            pair[chi] = par;
        }

        int tot_str = 0;
        vector<int> tot_vec;
        vector<int> real_tot_vec;
        tot_vec.push_back(tot_str);
        real_tot_vec.push_back(tot_str);
        for(int i=0;i<dir_num;i++){
            string dir_name;
            cin>>dir_name;
            int dir_size = dir_name.size()+1;
            tot_vec.push_back(dir_size);
        }
        for(int i = dir_num;i>1;i--){
            int start = i;
            tot_str = tot_vec[start];
            while(pair[start] != 1){
                tot_str += tot_vec[pair[start]];
                start = pair[start];
            }
            real_tot_vec[i] = tot_str + 4;
        }

        real_tot_vec[1] = 4;
        for(int i = 1;i<=dir_num;i++){
            cout<<real_tot_vec[i]<<endl;
        }
    }


}