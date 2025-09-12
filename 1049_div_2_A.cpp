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
   string s;
   cin>>s;
   string r=s;
   sort(r.begin(),r.end());
   int cnt=0;
   for(int i=0;i<n;i++){
    if(s[i]!=r[i]) cnt++;
   }
   cout<<cnt/2<<endl;

}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}