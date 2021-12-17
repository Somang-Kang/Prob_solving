#include <iostream>
#include <queue>
using namespace std;


struct Info{
    int dist;
    int x;
    int y;

    Info(int x,int y, int dist){
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
            double dist = sqrt(x**2+y**2);
            q.push(Info(x,y,dist));
        }
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            double dist = sqrt(x**2+y**2);
            q.push(Info(x,y,dist));
            q.pop();
            cout<<q.top()->x<<" "<<q.top()->y<<" "<<q.top().dist<<endl;
        }
    }
}