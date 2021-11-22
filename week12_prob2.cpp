//
// Created by 강소망 on 2021/11/22.
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
        cin>>N;
        vector<pair<int,int>> v;
        for(int i = 0;i<N;i++){
            int score,dist;
            cin>>score>>dist;
            v.push_back(make_pair(score,dist));
        }
        sort(v.begin(),v.end(),greater<>());
        int comp = v[0].second;
        int count = 1;
        for(int i = 1;i<v.size();i++){
            if(v[i].second > comp){
                continue;
            }
            else{
                count++;
                comp = v[i].second;
            }
        }
        cout<<count<<endl;
    }
}
