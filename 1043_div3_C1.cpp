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
   ll  n,m;
   cin>>n>>m;
   unordered_map<int,int> mpp; 
   vector<int> arr;
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x]==1){
            arr.push_back(x);
        }
   }
   sort(arr.begin(),arr.end());

//    for(auto & it: arr) cout<<it<<" ";
//    cout<<endl;
   ll l=0;
   ll r=0;
   int ans=0;
   while(r<arr.size()){
      if(r-l+1<m){
        r++;
        continue;

      }
      if(arr[r]-arr[l]<m){
        int a=1;
        // cout<<l<<" "<<r<<endl;
        for(int i=l;i<=r;i++){

            a=(a*mpp[arr[i]])%MOD;

        }
        ans+=a;
        // cout<<"ans"<<" "<<ans<<endl;

      }
      
        l++;
        r++;
      
   }
   cout<<ans<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
