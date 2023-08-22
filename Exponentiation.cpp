#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

ll binarysolve(ll n,ll m){
    if(n==0 && m==0)return 1;
    else if(n==0)return 0;
    else if(m==0)return 1;
    

    ll res=1;
    if(m%2==0){
        res=(n*n)%mod;
        res=binarysolve(res,m/2);
        
    }
    else{
        res=n%mod;
        res=res*binarysolve(n,m-1);
    }
    return res%mod;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=binarysolve(b,c);
        ans=ans%mod;
        ll res=binarysolve(a,ans);
        cout<<res%mod<<"\n";
    }
    return 0;
}