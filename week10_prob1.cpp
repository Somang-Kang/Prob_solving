//
// Created by 강소망 on 2021/11/05.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int min;
        string start,dest;
        cin>>start>>dest;
        string t_start = start;
        if(start.size()<4){
            int a= 4-start.length();
            for(int i = 0;i<a;i++){
                start.insert(0,"0");
            }
        }
        if(dest.size()<4){
            int a= 4-dest.length();
            for(int i = 0;i<a;i++){
                dest.insert(0,"0");
            }
        }
        if(start[0]==dest[0]){
            //+,-해주
        }
        else if(abs((dest[0]-48)-(start[0]-48)) == abs((dest[0]-48)-(start[3]-48))){
            if((start[0]-48)<(dest[0]-48)){
                while(stoi(start)!=stoi(dest)){
                    dest = to_string(stoi(dest)-1);
                }
            }
            else{

            }

        }
        else if(abs((dest[0]-48)-(start[0]-48)) < abs((dest[0]-48)-(start[3]-48))){

        }
        else{

        }

    }
}