//
// Created by 강소망 on 2021/10/10.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct compare{
    bool operator()(pair<int, int>a, pair<int, int>b){
        if(a.first<b.first)
            return false;
        else if (a.first == b.first){
            if(a.second<b.second) return false;
            else return true;
        }
        else{
            return true;
        }
    }
};

int main(){
    int counts,custs;
    cin>>counts>>custs;
    vector<int> priceVec(counts+1); //카운터별 총 가격 합
    vector<int> totTime(counts+1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare>pq;

    for(int i = 1;i<custs+1;i++){
        int times,price;
        cin>>times>>price;
        if(i<=counts) {
            pq.push({times,i});
            priceVec[i] = price;
            totTime[i] = times;
            continue;
        }
        priceVec[pq.top().second] += price;
        totTime[pq.top().second] += times;
        int curTopTime = pq.top().first;
        int curTopCounter = pq.top().second;
        pq.pop();
        pq.push({curTopTime+times,curTopCounter});
    }
    int maxTime = 0;
    for(int i = 1;i<counts+1;i++){
        if(totTime[i]>maxTime) maxTime = totTime[i];
    }
    cout<<maxTime<<endl;
    for( int i = 1;i<counts+1;i++){
        cout<<priceVec[i]<<endl;
    }
}