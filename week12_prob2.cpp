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
        vector<pair<int,int>> v;//방의 평점과 거리 저장
        for(int i = 0;i<N;i++){
            int score,dist;
            cin>>score>>dist;
            v.push_back(make_pair(score,dist));
        }
        sort(v.begin(),v.end(),greater<>()); //내림차순 정렬
        int comp = v[0].second;
        int count = 1; //평점이 가장 높은 방 우선 카운트
        for(int i = 1;i<v.size();i++){
            if(v[i].second > comp){//비교되는 방의 거리보다 멀면 후보에서 제외
                continue;
            }
            else{ //비교되는 방의 거리보다 가까우면 후보 등록
                count++;
                comp = v[i].second; //비교값 재설정
            }
        }
        cout<<count<<endl;
    }
}
