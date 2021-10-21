//
// Created by 강소망 on 2021/10/20.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        vector<pair<int,int>> sumPair;
        cin>>N;
        vector<int> inhaVec;
        vector<int> biroVec;
        for(int i = 0;i<N;i++){
            int x,y;
            cin>>x>>y;
            sumPair.push_back({x+y,i});
            inhaVec.push_back(x);
            biroVec.push_back(y);

        }
        sort(sumPair.begin(),sumPair.end());
        int turn = 0;
        int inhaSum = 0;
        int biroSum = 0;
        while(!sumPair.empty()){
           if(turn == 0){
               int tmpLoc = sumPair.back().second;
               inhaVec[tmpLoc];
               inhaSum += inhaVec[tmpLoc];
               sumPair.pop_back();
               turn = 1;
           }
           else{
               int tmpLoc = sumPair.back().second;
               biroVec[tmpLoc];
               biroSum += biroVec[tmpLoc];
               sumPair.pop_back();
               turn = 0;
           }
        }
        int result = inhaSum - biroSum;
        cout<<result<<endl;
    }

}