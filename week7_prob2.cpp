
#include <iostream>
#include <queue>
using namespace std;


struct Info{
    double dist;
    int x;
    int y;

    Info(int x,int y, double dist){
        this->x=x;
        this->dist=dist;
        this->y=y;
    }

    bool operator<(const Info a)const{
        if(this->dist==a.dist){
            if(this->x==a.x){
                return this->y<a.y;
            }
            return this->x<a.x;
        }
        return this->dist<a.dist;
    }
};


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        priority_queue<Info> q;
        int m,n,k;
        cin>>m>>n>>k;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            double dist = sqrt(x*x+y*y);
            q.push(Info(x,y,dist));
            if(q.size()>k)q.pop();
        }
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            double dist = sqrt(x*x+y*y);
            q.push(Info(x,y,dist));
            q.pop();
            cout<<q.top().x<<" "<<q.top().y<<endl;
        }
    }
}