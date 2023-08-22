#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr[n+1];
    for(int i=2;i<n;i++){
        int u,v=i;
        cin>>u;

        arr[u].push_back(v);
        arr[v].push_back(u);    
    }

    
    return 0;
}