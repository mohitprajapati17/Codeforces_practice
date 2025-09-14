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
   vector<ll> odd;
   ll sum_even=0;
   while(n--){
    ll x;
    cin>>x;
    if(x&1){
        odd.push_back(x);
    }
    else sum_even+=x;
   }
   sort(odd.rbegin(),odd.rend());
   if(odd.size()==0) {
    cout<<0<<endl;
    return;
   }
   ll ans=sum_even+odd[0];
   for(ll i=1;i<(odd.size()+1)/2;i++){
    ans+=odd[i];
   }
   cout<<ans<<endl;



}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}