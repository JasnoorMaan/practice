#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main() {
    ll n,m;
    cin>>n>>m;

    multiset<ll> tprices;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        tprices.insert(temp);
    }

    for(ll i=0;i<m;i++){
        ll cust;
        cin>>cust;

        auto it= tprices.upper_bound(cust);

        if(it==tprices.begin()){
            cout<<-1<<"\n";
            continue;
        }
        else{
            cout<<*(--it)<<"\n";
            tprices.erase(it);
        }
    }
    return 0;
}