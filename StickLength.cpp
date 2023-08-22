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
    sort(arr,arr+n);
    ll avg=arr[n/2],cost=0;

    for(ll i=0;i<n;i++){
        if(arr[i]!=avg){
            cost+=abs(arr[i]-avg);
        }
    }
    cout<<cost<<"\n";
    return 0;
}