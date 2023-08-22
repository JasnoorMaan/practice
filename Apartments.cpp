#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n,m,k;
    cin>>n>>m>>k;

    ll a[n],b[m];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    ll f=0,sec=0,count=0;
    while(f<n && sec<m){
        if(abs(a[f]-b[sec])<=k){
            count++;
            f++;
            sec++;
        }
        else if(a[f]>b[sec]){
            sec++;
        }
        else{
            f++;
        }
    }

    cout<<count<<"\n";
    return 0;
}