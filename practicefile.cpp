#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> room[10000];

int reved(int x){
    string str = to_string(x);
    if(str.length()==3){
        str = str+"0";
    }
    else if(str.length()==2){
        str = str+"00";
    }
    else if(str.length()==1){
        str = str+"000";
    }
    return stoi(str);
}
int main(){
    for(int i = 0;i<10000;i++){
        if(i!=0){
            room[i].push_back(i-1);
        }
        else if(i!=9999){
            room[i].push_back(i+1);
        }
        int num = reved(i);
        room[i].push_back(num);
    }
    int visited[10000];
    for(int i =0;i<10000;i++){
        visited[i]=-1;
    }
    queue<int> q;

    int tc;
    cin>>tc;
    while(tc--){
        int s,d;
        cin>>s>>d;

        q.push(s);
        visited[s]=0;
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(int i = 0;i<room[t].size();i++){
                if(visited[root[t][i]]==-1){
                    q.push(root[t][i]);
                    visited[root[t][i]]=visited[t]+1;
                }
                if(root[t][i]==d) break;
            }
        }
        cout<<visited[d]<<endl;

    }

}









while (!q.empty()) {
int cur = q.front();
q.pop();

for (int i = 0; i < road[cur].size(); i++) {
if (check[road[cur][i]] == -1) {
q.push(road[cur][i]);
check[road[cur][i]] = check[cur] + 1;
}
if (road[cur][i] == B) {
while (!q.empty())
q.pop();
break;
}
}
}