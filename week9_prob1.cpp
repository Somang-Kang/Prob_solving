#include <iostream>
#include <vector>

using namespace std;
long long X,N,M;

pair<long long,long long> GeoSeries(long long x,long long n){
    if(n==1){
        return {x%M,x%M};
    }
    pair<long long,long long> half = GeoSeries(x,n/2);
    long long exp = half.first;
    long long sum = half.second;

    if(n%2==0) return{(exp*exp)%M,((1+exp)*sum)%M};
    else return{(x*exp*exp)%M,(x+x*(1+exp)*sum)%M};
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        cin>>X>>N>>M;
        pair<long long,long long> ans = GeoSeries(X,N);
        cout<<ans.second<<endl;
    }
}