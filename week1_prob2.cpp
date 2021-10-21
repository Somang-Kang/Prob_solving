
//
// Created by 강소망 on 2021/09/03.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int qnum;
        cin>>qnum;
        vector<int> min_vec;
        vector<int> max_vec;
        vector<int> tot_vec;

        while(qnum--){
            int number;
            cin>>number;
            if(number == 1){
                int num;
                cin>>num;
                if(tot_vec.size()==0){min_vec.push_back(num); max_vec.push_back(num);}
                else {
                    if (num >= max_vec.back()) max_vec.push_back(num);
                    if (num <= min_vec.back()) min_vec.push_back(num);
                }
                tot_vec.push_back(num);
                cout<<min_vec.back()<<" "<<max_vec.back()<<"\n";
            }
            else {
                if(tot_vec.empty()) continue;
                else{
                    if(min_vec.back() == tot_vec.back()) min_vec.pop_back();
                    else if(max_vec.back() == tot_vec.back()) max_vec.pop_back();
                    tot_vec.pop_back();
                }
            }
        }
    }

}