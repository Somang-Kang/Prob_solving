//
// Created by 강소망 on 2021/12/10.
//

#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int matro[501];
        int DP[501];
        int n;
        cin>>n;
        for(int i =1;i<=n;i++){
            int x;
            cin>>x;
            matro[i] = x;
        }
        int ans = 0;
        for(int i =1;i<=n;i++){
            DP[i]=1;
            for(int j=1;j<=i-1;j++){
                if(matro[j]<matro[i]){
                    DP[i]=max(DP[i],DP[j]+1);
                }
            }
            ans = max(DP[i],ans);
        }
        cout<<ans<<endl;
    }
}