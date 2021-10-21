//
// Created by 강소망 on 2021/09/10.
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;



int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        queue<string> rightVec;
        int studentNum,wordNum;
        cin>>studentNum>>wordNum;
        while(wordNum--){
            string word;
            cin>>word;
            rightVec.push(word);
        }
        int tot_word;
        queue<string> stud_vec[1000];
        for(int k = 0;k<studentNum;k++){
            int wNum;
            cin>>wNum;
            for(int i = 0;i<wNum;i++){
                string word;
                cin>>word;
                stud_vec[k].push(word);
            }
            tot_word += wNum;
        }

            for (int j = 0; j < studentNum; j++) {
                if(rightVec.empty()) {cout<< 1<<endl; break;}
                if (stud_vec[j].front() == rightVec.front()) {
                    stud_vec[j].pop();
                    rightVec.pop();
                    j = -1;
                }
                if (j == studentNum - 1) cout<<0<<endl;
            }

            //if(rightVec.empty()) cout << 1;



            /*if(stud_vec[i-1].front() == rightVec.front()){
                stud_vec[i-1].pop();
                if(rightVec.empty()) cout<<1<<" "; break;
            }
            else if(studentNum%i == 0){
                cout<<0<<" ";
                break;
            }*/




    }
}