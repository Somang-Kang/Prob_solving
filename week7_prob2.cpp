//
// Created by 강소망 on 2021/10/15.
//

#include <iostream>
#include<cmath>
#include <queue>
using namespace std;

struct Info{
    double dist;
    int x;
    int y;
    Info(double dist,int x,int y){
        this->dist=dist;
        this->x=x;
        this->y=y;
    }
    bool operator<(const Info a)const{
        if(this->dist == a.dist){
            if(this->x==a.x){
                return this->y < a.y;
            }
            return this->x < a.x;
        }
        return this->dist<a.dist;
    }
};
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int m,n,k;
        cin>>m>>n>>k;
        priority_queue<Info> stores;
        for(int i =0;i<m;i++){
            int x,y;
            cin>>x>>y;
            double dist = sqrt(x*x+y*y);
            stores.push(Info(dist,x,y));
            if( stores.size()>k) stores.pop();
        }
        for(int i =0;i<n;i++){
            int x,y;
            cin>>x>>y;
            double dist = sqrt(x*x+y*y);
            stores.push(Info(dist,x,y));
            stores.pop();
            cout<< stores.top().x<<" "<<stores.top().y<<endl;
        }

    }
}