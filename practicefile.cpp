//
// Created by 강소망 on 2021/10/21.
//
#include <iotream>
#include <vector>
#include <queue>
/*
using namespace std;
struct compare{
    bool operator(pair<int,int>a,pair<int,int>b){
        if(a.first<b.first){
            return false;
        }
        else if(a.first == b.first){
            if(a.second<b.second) return false;
            else return true;
        }
        else return true;
    }
};

int main(){
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    pq.push({1,2});
}*/
/*bool flag;
for(int i = 1;i<n;i++){
    flag = true;
    for(int j = 0;j<n-i;j++){
        if(list[j]!=list[j+1]){
            flag=false;

        if(i=n-1) cnt++;

        break;
        }
    }
    cnt++

    if(flag) break;
}*/

struct compare{
    bool operator(pair<int,int>a,pair<int,int>b){
        if(a.first<b.fisrt) {return false;}
        else if(a.first == b.first){
            if(a.second<b.second){
                return false;
            }
            else {return true;}
        }
        else {return true;}
    }
};
int main(){
    using namespace std;
    //riority_queue<pair<int,int>,vector<pair<int,int>>,compare>> pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    pq.push({1,2});
    pq.push({2,3});

}
