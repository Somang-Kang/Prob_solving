//
// Created by 강소망 on 2021/10/29.
//
#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int X,N,M;
        cin>>X>>N>>M;
        int result = X*(pow(X,N)-1)/(X-1);
        cout<<result%M;


    }
}