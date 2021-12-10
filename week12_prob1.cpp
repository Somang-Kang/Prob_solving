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
        int min = 100000000;
        vector<int> v;//전체 블록들
        v.push_back(0);
        int gap = 0;
        for(int i = 1;i<=N;i++){ //i == 행 수
            for(int j = 1;j<=i;j++){// j == 각 행에 있는 블록 수
                int n;
                cin>>n;
                v.push_back(n);
                if(i != 1) { //i가 1일 때는 블록 삽입만 수행
                    int cur = v.size()-1; //현재 삽입되는 블록 위치
                    if(j == 1){ // 각 행의 첫 번째 블록은 비교연산 x
                        v[cur] += v[cur-gap];
                    }
                    else if( j == i){// 각 행의 마지막 블록은 비교연산 x
                        v[cur] += v[cur-(gap+1)];
                    }
                    else{ // 위 행의 올 수 있는 두 수중 더 작은 값을 채택
                        int x,y;
                        x = cur-i;
                        y = cur-i+1;
                        if(v[x]>= v[y]) v[cur] += v[y];
                        else v[cur] += v[x];
                    }
                }
                if(i == N){ //마지막 행일 경우
                    if(min>v[v.size()-1]){ // 최솟값찾기
                        min = v[v.size()-1];
                    }
                }
            }
            gap++; // 행이 늘어남에 따라 gap도 늘어남
        }

        cout<<min<<endl;
    }
}