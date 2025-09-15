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
   vector<int> arr(n);
   set<int> st;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]!=0) st.insert(arr[i]);
    
   }
   vector<int> a;
   for(int i=1;i<=n;i++){
    if(st.find(i)!=st.end()){

    }
    else{
        a.push_back(i);
    }
   }
   sort(a.rbegin(),a.rend());
   int i=0;
   for(auto &  it: arr){
    if(it==0){
        it=a[i];
        i++;
    }
   }
   int cnt=0;
   int l=-1;
   int r=-1;
   for(int i=0;i<n;i++){
    if(arr[i]!=i+1){
        l=i;
        break;
    }
   }

   for(int i=n-1;i>=0;i--){
    if(arr[i]!=i+1){
        r=i;
        break;
    }
   }
   if(l==-1&&r==-1) {
    cout<<0<<endl;
    return;
   }
   cout<<r-l+1<<endl;



  



}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}