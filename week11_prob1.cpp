//
// Created by 강소망 on 2021/11/12.
//

#include <iostraem>
#include <string>
#include <vector>
using namespace std;
int arr[26];
vector<pair<string,int>> vec;
int edges[24][24];
void dfs(int n){

}

int main(){

    for(int i =0;i<26;i++){
        int num;
        cin>>num;
        arr[i] = num;
    }
    int m;
    cin>>m;

    for(int i = 0;i<m;i++){
        string str;
        int score;
        cin>>str>>score;
        vec.push_back(make_pair(str,score));
    }




}