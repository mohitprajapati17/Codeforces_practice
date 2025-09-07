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
   int n;
   cin>>n;
   map<int,int> mpp;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
    mpp[arr[i]]++;
   }
   for(auto & [it,i]: mpp){
    if(it==1) continue;
    if(it!=i){
        cout<<-1<<endl;
        return;
    } 
   }

   int x=1;
   map<int,int> ans;
   for(int i=0;i<n;i++){
    if(arr[i]==1) continue;
        if(ans[arr[i]]==0){
            ans[arr[i]]=x;
        
            x++;
        }
        
        
   };
   int last=2*1e5;
   for(auto & it:arr){
        if(it==1)cout<<n--<<" ";
        else{
            cout<<ans[it]<<" ";
        }

   }
   cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
