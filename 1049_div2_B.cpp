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
   ll  k;
   cin>>n>>k;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   map<int,int> mpp;
   for(auto & it :  arr) mpp[it]++;
   for(auto & it:mpp){
    if(it.second%k!=0){
        cout<<0<<endl;
        return;
    }
    else it.second=it.second/k;
   }
   map<int,int> mpp1;
   int l=0;
   int r=0;
   int ans=n;
   while(r<n){
        mpp1[arr[r]]++;
        if(mpp[arr[r]]<mpp1[arr[r]]){
            ans+=(r-l)*(r-l-1)/2;
            cout<<"ans"<<ans<<endl;
            cout<<"l"<<l<<"r"<<r<<endl;
            l++;
            mpp1[l]--;

        }
        r++;

   } 
   while(l<n){
        
   }

   cout<<ans<<endl;




}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}