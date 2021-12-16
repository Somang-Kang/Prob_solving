
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> room[10000];

int reved(int x){
    string str = to_string(x);
    if(str.length()==3){
        str = "0"+str;
    }
    else if(str.length()==2){
        str = "00"+str;
    }
    else if(str.length()==1){
        str = "000"+str;
    }
    reverse(str.begin(),str.end());
    return stoi(str);
}
int main(){
    for(int i = 0;i<10000;i++){
        if(i!=0){
            room[i].push_back(i-1);
        }
        if(i!=9999){
            room[i].push_back(i+1);
        }
        int num = reved(i);
        room[i].push_back(num);

    }
    int visited[10000];

    queue<int> q;

    int tc;
    cin>>tc;
    while(tc--){
        for(int i =0;i<10000;i++){
            visited[i]=-1;
        }
        int s,d;
        cin>>s>>d;
        q.push(s);
        visited[s]=0;
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(int i = 0;i<room[t].size();i++){
                if(visited[room[t][i]]==-1){
                    q.push(room[t][i]);
                    visited[room[t][i]]=visited[t]+1;
                }
                if(room[t][i]==d) {
                    while(!q.empty()) q.pop();
                    break;
                }
            }
        }
        cout<<visited[d]<<endl;

    }
}