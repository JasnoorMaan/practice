#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> vec;
    vec.push_back(n);
    
    while(n!=1){
        if(n%2==0){
        n/=2;
        vec.push_back(n);
    }
    else{
        n*=3;
        n++;
        vec.push_back(n);
    }
    }
    
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}