//
// Created by 강소망 on 2021/09/25.
//
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int A,B,x,y;
        cin>>A>>B>>x>>y;
        int x_result = 1;
        int x_cost = 0;
        while(x_result == 1) {
            x_result = gcd(A,B);
            x_cost += x;
            A+=1; B+=1;
        }
        int y_result = 1;
        int y_cost = 0;
        while(y_result == 1) {
            y_result = gcd(A,B);
            y_cost += x;
            A-=1; B-=1;
        }
        if(x_cost>y_cost){
            cout<<y_result<<" "<<y_cost<<endl;
        }
        else{
            cout<<x_result<<" "<<x_cost<<endl;
        }
    }
}