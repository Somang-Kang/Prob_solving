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
        vector<int> addVec;
        vector<int> realVec;
        cin >> num;
        for (int i = 0; i < num; i++) {
            int hz;
            cin >> hz;
            if (i == 0) {
                realVec.push_back(hz);
                iter = 0;
            } else {
                if (hz == realVec[iter]) {
                    addVec.push_back(hz);
                    if (addVec.size() % realVec.size() == 0) {
                        iter = 0;
                    } else {
                        iter++;
                    }

                } else {
                    if (addVec.size() == 0) realVec.push_back(hz);
                    else {
                        for (int j = 0; j < addVec.size(); j++) {
                            realVec.push_back(addVec[j]);
                        }
                        //if(i == num-1 && hz!=realVec[0]) realVec.push_back(hz);
                        addVec.clear();
                        if (realVec[0] == hz) {
                            addVec.push_back(hz);
                            iter = 1;
                        }
                        else{
                            realVec.push_back(hz);
                            iter = 0;
                        }

                    }
                }
            }
        }
        int recur = realVec[0];
        int k = 0;
        while(realVec[k]==recur){
            k++;
        }
        for(int s = 1;s<k;s++){
            if(realVec.back() == recur){
                realVec.pop_back();
            }
        }
        for(int i = 0;i<realVec.size();i++){
            cout<<realVec[i]<<" ";
        }
        cout<<endl;
    }
}