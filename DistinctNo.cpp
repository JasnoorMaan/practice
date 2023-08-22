#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    cout<<mp.size()<<"\n";

    return 0;
}