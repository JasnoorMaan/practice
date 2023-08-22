#include <bits/stdc++.h>
#define mod 1000000007
#define modd 998244353
#define ll long long
using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        vec.push_back({temp,i});
    }
    sort(vec.begin(),vec.end());
    ll i=0,j=n-1;
    while(j>i){
        if(vec[i].first + vec[j].first==x){
            cout<<vec[i].second+1<<" "<<vec[j].second+1<<"\n";
            return 0;
        }
        else if(vec[i].first + vec[j].first>x){
            j--;
        }
        else if(vec[i].first + vec[j].first<x){
            i++;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}