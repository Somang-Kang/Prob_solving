
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