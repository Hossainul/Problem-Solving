#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string,int>mp;

    int n; cin >> n;
    string arr[n];
    
    f
    {
        cin >> arr[i];
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        mp[arr[i]]++;
        if(mp[arr[i]] == 1) p arr[i].substr(arr[i].length() - 2);;
    }
    
    
    
    return 0;
}