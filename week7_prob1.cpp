//
// Created by 강소망 on 2021/10/15.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    while(tc--){
        int N,M;
        cin>>N>>M;
        int ballArr[101][101];
        vector<int> arrSize(101);
        for(int i = 0;i<M;i++){
            int a,b;
            cin>>a>>b;
            //a무게>b무게
            if(arrSize[a] == NULL) arrSize[a] = 0;
            else arrSize[a]++;
            ballArr[a][arrSize[a]] = b;
        }
        for(int i =1;i<=M;i++){
            for(int j = 1;j<= arrSize[j];j++){
                if(arrSize[j]==0) break;
                int it = j;

                while(arrSize[it]!=0){
                    if(ballArr[i][it];
                    j++;
                }
            }
        }

    }
}