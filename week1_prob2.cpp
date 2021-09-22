//
// Created by 강소망 on 2021/09/03.
//

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main(){


    int testcase;
    cin>>testcase;
    while(testcase--){
        int qnum;
        cin>>qnum;
        vector<int> block_vec;
        int min = 0;
        int max = 0;
        while(qnum--){
            int number;
            cin>>number;
            if(number == 1){
                int num;
                cin>>num;
                if(block_vec.size()==0){min = num;max = num;}
                else{
                    if(num>max) max = num;
                    if(num<min) min = num;
                }
                block_vec.push_back(num);
                cout<<min<<" "<<max<<"\n";
            }
            else if (number == 2){
                if(block_vec.empty()) {}
                else{
                    block_vec.pop_back();
                    min = 1000;max=0;
                    for(int i = 0;i<block_vec.size();i++){
                        if(block_vec[i]<min) min = block_vec[i];
                        if(block_vec[i]>max) max = block_vec[i];
                    }
                }
            }
            else{

            }
        }
    }

}
