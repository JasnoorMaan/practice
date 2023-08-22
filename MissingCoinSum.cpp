#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(auto it:a){
        cin>>it;
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        ll expected=i+a[0];

        if(expected!=sum){
            cout<<expected;
            break;
        }
    }
    return 0;
}