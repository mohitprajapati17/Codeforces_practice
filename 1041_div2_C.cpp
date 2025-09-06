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
   int n,k;
   cin>>n>>k;
   vector<pair<int,int> > arr(n);
   for(int  i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i]=make_pair(x,y);
   }
   sort(arr.begin(),arr.end());
   vector<pair<int,int> > ans;
   for(int i=1;i<n;i++){
        vector<int> four(4);
        four[0]=arr[i-1].first;
        four[1]=arr[i-1].second;
        four[2]=arr[i].first;
        four[3]=arr[i].first;
        int first=abs(four[0]-four[1])+abs(four[2]-four[3]);
        sort(four.begin(),four.end());
        int second=abs(four[0]-four[1])+abs(four[2]-four[3]);
        ans.push_back(make_pair(second-first,first));

   }
   sort(ans.begin(),ans.end());
   int a=0;
    for(int i=0;i<ans.size();i++){
        if(i==0) a+=ans[i].first+ans[i].second;
        else a+=ans[i].second;
    }

    cout<<a<<endl;


}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
