
#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second
#define nl '\n' 

typedef long long ll;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(d<0){
            b.pb(abs(d));
        }else{
            a.pb(d);
        }
    }
    sort(all(a));
    sort(all(b));
    
    ll dis=0;
    int i=a.size()-1;
    while(i>=0){
       dis+=2*a[i];
       i-=k;
    }
    i = b.size()-1;
     while(i>=0){
       dis+=2*b[i];
       i-=k;
    }
    int as = a.size(),bs= b.size();
    int mx = 0;
    if (as > 0){
      mx = max(mx, a[as - 1]);
    }
    if (bs > 0){
      mx = max(mx, b[bs - 1]);
    }
    //cout << dis << "->" << mx << endl;
     dis-=mx;
    cout<<dis<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;  
    cin >> t;  
    while (t--) {
        solve();
    }
    return 0;
}