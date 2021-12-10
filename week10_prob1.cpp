//
// Created by 강소망 on 2021/11/05.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int result;
int cnt =0;
int reverseV(int n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    if(n<1000 &&n>99){
        s.push_back('0');
    }
    else if(n<100&&n>9){
        s.push_back('0');
        s.push_back('0');
    }
    else if(n<10 && n>0){
        s.push_back('0');
        s.push_back('0');
        s.push_back('0');
    }


    return atoi(s.c_str());
}

int RoomEscape(int n){
    if(n==result){
        return cnt;
    }
    int minusValue = n-1;
    int plusValue = n+1;
    int reverseValue = reverseV(n);
    int value = abs(result-minusValue);
    int returnValue = minusValue;
    if(abs(result-plusValue)<value){
        value = abs(result-plusValue);
        returnValue = plusValue;
    }
    if(abs(result-reverseValue)<value){
        returnValue = reverseValue;
    }
    cnt++;
    RoomEscape(returnValue);

}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n>>result;

        RoomEscape(n);
        cout<<cnt<<" ";
        cnt =0;
    }
}