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
   vector<int> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   for(auto & it: arr){
    cout<<abs(n-it+1)<<" ";
   }
   cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}