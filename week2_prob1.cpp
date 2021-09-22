//
// Created by 강소망 on 2021/09/10.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int visited[] = {false,};




int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        vector<string> rightVec;
        int studentNum,wordNum;
        cin>>studentNum>>wordNum;
        while(wordNum--){
            string word;
            cin>>word;
            rightVec.push_back(word);
        }

        vector<vector<string>> stud_vec;
        for(int order = 0;order<studentNum;order++){
            int wNum;
            cin>>wNum;
            for(int i = 0;i<wNum;i++){
                string word;
                cin>>word;
                stud_vec[order].push_back(word);
            }
        }

        int rightOrder = 0;
        for(int y=0;x<stud_vec.size();x++){
            for(int x=0;y<stud_vec[x].size();y++){
                if(stud_vec[x][y] == rightVec[rightOrder]){
                    rightOrder++;
                    continue;
                }
                else {
                    x--;

                }

            }
        }

        int x,y = 0;
        if(stud_vec[x][y] == rightVec[rightOrder]){
            stud_vec[x][y] = '0';
            if(x가 범위 넘지 않으면) x+1;
            else y+1;
        }




        //x초과
        if(x == stud_vec.size()) {
            x = 0;
            //y차례
            y += 1;
            if(stud_vec[x][y] == rightVec[rightOrder]){
                continue;
            }
            x++;
        }

        //y초과
        if(y == stud_vec[x].size()){

        }

        //x차례

        else if (y == stud_vec[x].size()){

        }

        else if(){
            x +- 1;
        }




            if(rightOrder-1 == rightVec.size()) cout<<0;
        }


    }
}