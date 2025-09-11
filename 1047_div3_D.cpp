#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <math.h>
using namespace std;
#define ll long long
ll MOD =1e9+7;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

 

void solve() {
   ll n;
   cin>>n;
   vector<ll> b(n);
   for(int i=0;i<n;i++) cin>>b[i];
   map<ll,vector<ll>> mpp;
    for(ll i=0;i<n;i++){
        mpp[b[i]].push_back(i);   //position  of each  same number in array b
    }

    vector<ll> ans(n);
    ll  i=1;
    for(auto & [it,key]: mpp){
        // cout<<it<<" ";
        if(key.size()%it!=0) {
            cout<<-1<<endl;
            return;
        }
        ll  y =it;
        for(auto & x:key){
            
            y--; 
            ans[x]=i;
                
            if(y<=0){
                i++;
                y=it;
            }
            
        }

    }
    for(auto & it: ans) cout<<it<<" ";
    cout<<endl;

}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}