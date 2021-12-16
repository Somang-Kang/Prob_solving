/*
#include<iostream>
#include<set>
using namespace std;
int T, N, M;
int* messenger;
int* answer;
int main() {
    cin >> T;
    while (T--) {
        cin >> N >> M;
        messenger = new int[M + 1];
        answer = new int[M + 1];
        for (int i = 1; i <= M; i++)
            cin >> messenger[i];
        set<int> readers;
        for (int i = M; i >= 1; i--) {
            if (readers.find(messenger[i]) == readers.end())
                readers.insert(messenger[i]);
            answer[i] = N - readers.size();
        }
        for (int i = 1; i <= M; i++)
            cout << answer[i] << "\n";

    }
}*//*
#include<iostream>
#include <vector>
#include<set>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N,M;
        cin >> N >> M;
        vector<int> messenger;
        vector<int> answer(M+1);
        messenger.push_back(0);
        for (int i = 1; i <= M; i++) {
            int x;
            cin >> x;
            messenger.push_back(x);
        }
        set<int> readers;
        for (int i = M; i >= 1; i--) {
            if (readers.find(messenger[i]) == readers.end())
                readers.insert(messenger[i]);
            answer[i] = N - readers.size();
        }
        for (int i = 1; i <= M; i++)
            cout << answer[i] << "\n";

    }
}*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<int> mes;
        vector<int> ans;
        ans.push_back(0);
        mes.push_back(0);
        vector<bool> peo(n+1);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            mes.push_back(x);
        }
        int cnt=0;
        for(int i=m;i>0;i--){
            if(peo[mes[i]]!=true){
                cnt++;
                ans.push_back(cnt);
                peo[mes[i]]=true;
            }
            else{
                ans.push_back(cnt);
            }
        }
        for(int i=m;i>0;i--){
            cout<<n-ans[i]<<endl;
        }
    }
}