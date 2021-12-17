
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        vector<int> v;
        v.push_back(0);
        int n;
        int gap = 1;
        int minV = 1000000000;
        cin>>n;
        for(int i =1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                int x;
                cin>>x;
                if(i==1) {
                    v.push_back(x);
                }
                else if(j==1){
                    v.push_back((x+v[(v.size()-(i-1))]));
                }
                else if(j==i){
                    v.push_back(x+v[(v.size()-i)]);
                }else{
                    int left = v[v.size()-i];
                    int right = v[v.size()-i+1];
                    int minV = min(left,right);
                    v.push_back(x+minV);
                }

                if(i==n){
                    if(minV>v[v.size()-1])
                        minV = v[v.size()-1];
                }
            }

        }
        cout<<minV;
    }
}