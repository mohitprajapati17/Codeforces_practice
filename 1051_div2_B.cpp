#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <math.h>
using namespace std;
#define ll long long
ll MOD =998244353;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

 

void solve() {
   ll n,m;
   
   cin>>n>>m;
   
   vector<ll> a(n),b(m);
   ll sum=0;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       sum+=a[i];
   }
   for(ll i=0;i<m;i++){
       cin>>b[i];
   }
   sort(a.rbegin(),a.rend());
   
   sort(b.begin(),b.end());
   ll l=0,r=0;
   while(r<m&&l<n){
       if(b[r]-1+l>=n){
           break;
       }
    //   cout<<"l"<<l<<" r"<<r<<endl;
       sum-=a[l+b[r]-1];
       l+=b[r];
       r++;
       
   }
   cout<<sum<<endl;
   
   


}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}