#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll arr[n-1];
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll sumTotal=(n*(n+1))/2;
    
    cout<<sumTotal-sum<<"\n";

    return 0;
}