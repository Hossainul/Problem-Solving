#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i =0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<int>an;
        int l,r = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(i + 1 < n) l = abs(a[i] - a[i+1]);
            if(i - 1 >= 0)r = abs(a[i] - a[i-1]);
            an.push_back(max(l,r));
        }
        

        sort(an.begin(),an.end());
        cout << an[0] << endl;
        
    }
}