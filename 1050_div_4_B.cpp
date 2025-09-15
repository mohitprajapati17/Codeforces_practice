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
   int n,m,a,y;
   cin>>n>>m>>a>>y;
   int ans=0;
   while(n--){
    int x;
    cin>>x;
    if(x<=y) ans++;

   }

   while(m--){
    int x;
    cin>>x;
    if(x<=a) ans++;
   }
   cout<<ans<<endl;


}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}