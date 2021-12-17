
#include <iostream>
using namespace std;
char paper[1025][1025];
struct Paper{
    int blue_n=0;
    int red_n = 0;
    int blue_s=0;
    int red_s=0;
};

Paper solution(int x,int y,int siz){
    Paper ret;
    if(siz==1){
        if(paper[x][y]=='R'){
            ret.red_n=1;
            ret.red_s=1;
        }
        else{
            ret.blue_n=1;
            ret.blue_s=1;
        }
        return ret;
    }
    Paper status[5];
    status[1] = solution(x,y,siz/2);
    status[2] =solution(x+siz/2,y,siz/2);
    status[3] =solution(x,y+siz/2,siz/2);
    status[4] =solution(x+siz/2,y+siz/2,siz/2);

    for(int i =1;i<=4;i++){
        ret.red_s+=status[i].red_s;
        ret.blue_s+=status[i].blue_s;
        ret.red_n+=status[i].red_n;
        ret.blue_n+=status[i].blue_n;
    }

    if(ret.red_n==0){
        ret.blue_n=1;
    }
    if(ret.blue_n==0){
        ret.red_n=1;
    }
    return ret;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int siz;
        cin>>siz;
        for(int i =0;i<siz;i++){
            for(int j = 0;j<siz;j++){
                char c;
                cin>>c;
                paper[i][j]=c;
            }
        }
        Paper ans = solution(0,0,siz);
        cout<<ans.red_n<<" "<<ans.red_s<<" "<<ans.blue_n<<" "<<ans.blue_s<<endl;
    }
}