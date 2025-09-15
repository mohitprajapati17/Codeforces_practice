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
   int sum=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
   }
   if(sum%3!=0){
    cout<<0<<" "<<0<<endl;
    return ;
   }
   int b1=arr[0]%3;
   
   int s=0;

   int r = -1;
   for(int i=n-1;i>=0;i--){
        s+=arr[i];
        // cout<<"s"<<s<<"b1"<<b1<<endl;
        if(s%3!=b1){
            r=i-1;
            break;
        }
   }
   cout<<1<<" "<<2<<endl;

  



}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}