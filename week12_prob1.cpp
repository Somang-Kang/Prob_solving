//
// Created by 강소망 on 2021/11/19.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        vector<int> v;
        vector<int> finalV;
        v.push_back(0);
        int sum = 0;
        int gap = 0;
        for(int i = 1;i<=N;i++){
            for(int j = 1;j<=i;j++){
                int n;
                cin>>n;
                v.push_back(n);
                if(i != 1) {
                    int cur = v.size()-1;
                    if(j == 1){
                        v[cur] += v[cur-gap];
                    }
                    else if( j == i){
                        v[cur] += v[cur-(gap+1)];
                    }
                    else{
                        int x,y;
                        x = cur-i;
                        y = cur-i+1;
                        if(v[x]>= v[y]){
                            v[cur] += v[y];
                        }
                        else{
                            v[cur] += v[x];
                        }
                    }
                }

                if(i == N){
                    finalV.push_back(v[v.size()-1]);
                }

            }
            gap++;
        }
        int min = finalV[0];
        for(int i=0;i<finalV.size();i++){
            if(finalV[i]<min) min = finalV[i];
        }

        cout<<min<<endl;
    }
}