#include <iostream>
using namespace std;

class Line{
public:
    int x1,x2,y1,y2;
};
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        Line L1;
        Line L2;
        for(int i = 0;i<2;i++) {
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            if(i==0){
                if(x1<=x2 && y1<=y2){L1.x1 = x1; L1.y1 = y1; L1.x2 = x2; L1.y2 = y2;}
                else if(x1<=x2 && y1>=y2){L1.x1 = x1; L1.y1 = y2; L1.x2 = x2; L1.y2 = y1;}
                else if(x1>=x2 && y1<=y2){L1.x1 = x2; L1.y1 = y1; L1.x2 = x1; L1.y2 = y2;}
                else{L1.x1 = x2; L1.y1 = y2; L1.x2 = x1; L1.y2 = y1;}
            }
            else {
                if(x1<=x2 && y1<=y2){L2.x1 = x1; L2.y1 = y1; L2.x2 = x2; L2.y2 = y2;}
                else if(x1<=x2 && y1>=y2){L2.x1 = x1; L2.y1 = y2; L2.x2 = x2; L2.y2 = y1;}
                else if(x1>=x2 && y1<=y2){L2.x1 = x2; L2.y1 = y1; L2.x2 = x1; L2.y2 = y2;}
                else{L2.x1 = x2; L2.y1 = y2; L2.x2 = x1; L2.y2 = y1;}
            }
        }

        //relation3
        if(L1.y1==L2.y1 && L1.y2 == L2.y2 && L1.y1 == L2.y2){
            if(L1.x2>L2.x2 && L1.x1<L2.x2 && L2.x1<L1.x1) {
                cout<<3<<endl;
                continue;
            }
            else if(L2.x2>L1.x2 && L2.x1<L1.x2 && L1.x1<L2.x1){
                cout<<3<<endl;
                continue;
            }

        }
        else if(L1.x1 == L2.x1 && L1.x2 == L2.x2 && L1.x1 == L2.x2){
            if(L1.y2>L2.y2 && L1.y1<L2.y2 && L1.y1>L2.y1){
                cout<<3<<endl;
                continue;
            }
            else if(L2.y2>L1.y2 && L2.y1<L1.y2 && L2.y1>L1.y1) {
                cout << 3 << endl;
                continue;
            }
        }

        //relation1
        if(L2.y1>L1.y2){
            cout<<1<<endl;
            continue;
        }
        else if(L1.y1>L2.y2){
            cout<<1<<endl;
            continue;
        }
        else if(L2.x1>L1.x2){
            cout<<1<<endl;
            continue;
        }
        else if(L1.x1>L2.x2){
            cout<<1<<endl;
            continue;
        }

        //relation4
        if(L1.x1 == L2.x1 && L1.x2 == L2.x2){
            //L1이 길 때,
            if(L1.y1 < L2.y1 && L1.y2>L2.y2){
                cout<<4<<endl;
                continue;
            }
            //L2가 길 때,
            else if(L2.y1 < L1.y1 && L2.y2>L1.y2){
                cout<<4<<endl;
                continue;
            }
        }

        if(L1.y1 == L2.y1 && L1.y2 == L2.y2){
            //L1이 길 때,
            if(L1.x1 < L2.x1 && L1.x2>L2.x2){
                cout<<4<<endl;
                continue;
            }
                //L2가 길 때,
            else if(L2.x1 < L1.x1 && L2.x2>L1.x2){
                cout<<4<<endl;
                continue;
            }
        }
        else{
            cout<<2<<endl;
        }

    }
}