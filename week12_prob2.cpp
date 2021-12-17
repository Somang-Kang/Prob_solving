
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        vector<pair<int,int>> p;
        int n;
        cin>>n;
        for(int i =0;i<n;i++){
            int a,b;
            cin>>a>>b;
            p.push_back(make_pair(a,b));
        }
        sort(p.begin(),p.end(),greater<>());
        int cnt = 1;
        int comp = p[0].second;
        for(int i = 1;i<n;i++){
            if(p[i].second<comp){
                cnt++;
                comp = p[i].second;
            }
        }
        cout<<cnt<<endl;
    }
}