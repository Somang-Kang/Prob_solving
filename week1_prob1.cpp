#include <iostream>
#include <string>
#include <vector>
using namespace std;

int first_str_num(int x,int order,int j){
    if(order%2 == 0){
        return order*x - (x - j - 1);
    }
    else{
        order = order-1;
        return order*x + 1 + (x - j - 1);
    }
}
int main() {
    int testcase,k;
    cin>>testcase;

    while(testcase--) {
        string str;
        cin>>str>>k;
        vector<char> strVec;
        for (int i = 0; i < str.length(); i++) {
            strVec.push_back(str[i]);
        }
        int str_order = 0;
        int j = k;
        while (j--) {
            int order = 1;
            while (1) {
                if(order == 1){
                    str_order = 1 + (k - j - 1);
                }
                else {
                    str_order = first_str_num(k, order,j);
                }

                if(str_order > strVec.size()) break;
                cout << strVec[str_order-1];
                order++;
            }
        }
        cout<<"\n";
    }



}
