//
// Created by 강소망 on 2021/10/15.
//

#include <iostream>
#include <vector>
#include<cmath>
#include <algorithm>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        vector<pair<int, pair<int, int> > > v;
        int inits,adds,k;
        cin>>inits>>adds>>k;

        for(int i= 0;i<inits;i++){
            int x,y;
            cin>>x>>y;
            float res = sqrt(x*x + y*y);
            if(i<k){
                v.push_back(pair<float, pair<int, int> >(res,pair<int,int>(x,y)));
                if(i == k-1)sort(v.begin(), v.end());
                continue;
            }
            else if( res < v[k-1].first) {
                v.push_back(pair<float, pair<int, int> >(res,pair<int,int>(x,y)));
            }
            else continue;
        }
        sort(v.begin(), v.end());

        for(int i =0;i<adds;i++){
            int x,y;
            cin>>x>>y;
            float res = sqrt(x*x + y*y);

            if(res < v[k-1].first) {
                v.insert(v.begin(), pair<float, pair<int, int> >(res, pair<int, int>(x, y)));
                sort(v.begin(), v.begin()+k-1);
            }
            /*else{
                v.push_back(pair<float, pair<int, int> >(res,pair<int,int>(x,y)));
            }*/
            cout<<v[k-1].second.first<<" "<<v[k-1].second.second<<" ";
        }
    }
}