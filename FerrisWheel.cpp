#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n,x;
    cin>>n>>x;

    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    ll sec=n-1,count=0;
    for(ll i=0;i<=sec;i++){
        if(arr[i]+arr[sec]<=x){
            sec--;
            count++;
        }
        else{
            sec--;
            count++;
            i--;
        }
    }
    cout<<count<<"\n";
    return 0;
}