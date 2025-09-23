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
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   if(arr[n-1]==1&&arr[0]==2||arr[0]==1&&arr[n-1]==2){
        int l=1;
        int r=n-2;
        while(l<r){
            if(arr[l]!=arr[l-1]+2){
                cout<<"No"<<endl;
                return;
            }
            if(arr[r]!=arr[r+1]+2){
                cout<<"No"<<endl;
                return;
            }
            l++;
            r--;
        }

    
   }
   else {
    cout<<"No"<<endl;
    return;
   }
   cout<<"Yes"<<endl;
   


}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}