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
   
   ll a,b;
   cin>>a>>b;
   if(a%2==0&&b%2==1){
    cout<<-1<<endl;
    return;
   }
   if(a%2==1&&b%2==1){
    cout<<a*b+1<<endl;
    return;
   }
   if(b%2==0){
        ll x=b/2;
        a=a*x;
        b=2;
        if((a+b)%2==1){
            cout<<-1<<endl;
            return;
        }
        cout<<a+b<<endl;
        return;
   }
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}