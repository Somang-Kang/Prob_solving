#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    int testcase;
    cin>>testcase;

    while(testcase--){
        int dir_num;
        cin >> dir_num;
        int vec_size = dir_num+1;
        vector<int> pair(vec_size);
        pair[0] = 0;
        //int pair[50001]; //짝
        for (int i = 0; i < dir_num-1; i++) {
            int par, chi;
            cin >> par >> chi;
            pair[chi] = par;
        }

        int tot_str = 0;
        vector<int> tot_vec;
        vector<bool> isTotal(vec_size);
        isTotal[0] = true;
        isTotal[1] = true;
        //vector<int> real_tot_vec(vec_size);
        tot_vec.push_back(tot_str);
        //real_tot_vec[0] = tot_str;
        for(int i=0;i<dir_num;i++){
            string dir_name;
            cin>>dir_name;
            int dir_size = dir_name.size();
            tot_vec.push_back(dir_size);
        }
        for(int i = dir_num;i>1;i--){
            int start = i;
            tot_str = tot_vec[start];
            while(isTotal[start] != true){
                tot_str = tot_str + tot_vec[pair[start]]+1;
                start = pair[start];
            }
            isTotal[i]=true;
            tot_vec[i] = tot_str;
            //real_tot_vec[i] = tot_str + 4;
        }

        tot_vec[1] = 4;
        //real_tot_vec[1] = 4;
        for(int i = 1;i<=dir_num;i++){
            cout<<tot_vec[i]<<endl;
        }
    }


}