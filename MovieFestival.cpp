#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll temp1,temp2;
        cin>>temp1>>temp2;

        mp[temp1]++;
        mp[temp2]--;
    }
    ll maxi=0,ans=0;
    for(auto i:mp){
        ans+=i.second;
        maxi= max(maxi,ans);
    }
    cout<<maxi<<"\n";
    return 0;
}