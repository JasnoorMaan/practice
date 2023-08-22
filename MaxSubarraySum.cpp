#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll maxi=INT_MIN,sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=max(maxi,sum);
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<"\n";
    return 0;
}