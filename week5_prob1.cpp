//
// Created by 강소망 on 2021/10/01.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--) {
        int num;
        int iter = 0;
        int hzsize = 0;
        vector<int> rightVec;
        vector<int> allVec;
        vector<int> realVec;
        cin >> num;
        for (int i = 0; i < num; i++) {
            int hz;
            cin >> hz;
            allVec.push_back(hz);
            rightVec.push_back(hz);
            hzsize++;
            if (allVec.size() > 1) {
                if (allVec[iter] == hz) {
                    rightVec.pop_back();
                    hzsize--;
                    iter++;
                }
                else{
                    for (int j = hzsize-1; j < allVec.size(); j++) {
                        if(j == (hzsize-1)){
                            rightVec.pop_back();
                        }
                        rightVec.push_back(allVec[j]);
                    }
                }
            }
        }
            /*if(allVec.size()>1 && allVec[iter] == hz){
                if(rightVec.size()!=0 && rightVec.size() == allVec.size()/2 || rightVec.size() == realVec.size() && rightVec.size()!=0) {
                    for(int j = 0;j<rightVec.size();j++){
                        realVec.push_back(rightVec[j]);
                    }
                    iter = 0;
                    rightVec.clear();
                    continue;
                }
                rightVec.push_back(hz);
                iter++;
            }
            else if(rightVec.size() != 0){

                rightVec.clear();
                realVec.clear();
                iter = 0;
                if(allVec[iter] == hz){
                    rightVec.push_back(hz);
                    iter++;
                }
            }
            else{
            }
        }

        if(realVec.size() == 0){
            for(int j = 0;j<allVec.size();j++){
                cout<<allVec[j]<<" ";
            }
        }
        else{
            for(int j = 0;j<realVec.size();j++){
                cout<<realVec[j]<<" ";
            }
        }*/
        if(hzsize == allVec.size()){
            for(int j =0;j<allVec.size();j++){
                cout<<allVec[j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j =0;j<rightVec.size();j++){
                cout<<rightVec[j]<<" ";
            }
            cout<<endl;
        }
    }
}