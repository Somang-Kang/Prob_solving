//
// Created by 강소망 on 2021/09/25.
//
#include <iostream>
using namespace std;


int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int A,B,x,y;
        cin>>A>>B>>x>>y;
        int gcd = 0;
        int x_cost = 0;
        int y_cost = 0;
        int y_result = 1;
        int gap = abs(A-B);
        if(B<A) {
            int tmp = A;
            A = B;
            B = tmp;
        }
        gcd = gap;
        int a = A;
        int b = B;
        while(a%gcd != 0){
            a+=1;
            b+=1;
            x_cost += x;
        }

        while(A%gcd != 0){
            A-=1;
            B-=1;
            y_cost += y;
            if(A<1 || B<1) {y_result = 0; break;}
        }

        if(x_cost>y_cost && y_result != 0){
            cout<<gcd<<" "<<y_cost<<endl;
        }
        else{
            cout<<gcd<<" "<<x_cost<<endl;
        }

    }
}