// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
	faster;
	int n, x; cin >> n >> x;
	vector<pair<int,int>>a(n);
    vector<int>b(n);

	for(int i = 0; i < n; i++)
	{
	    cin >> b[i];
		a[i] = {b[i],i+1};
	}

	
    sort(a.begin(),a.end());

	for(int i = 0; i < n; i++)
	{
		int target = x - b[i];
		int l = 0,r = n - 1;

		while(l < r)
		{
            if(a[l].second == i + 1)
			{
				l++;
				continue;
			}
			if(a[r].second == i + 1)
			{
				r--;
				continue;
			}

			int sum = a[l].first + a[r].first;
			if(sum == target) 
			{
				p a[l].second << " " << a[r].second << " " << i + 1 << endl;
				return 0;
			}
			else if(sum > target) r--;
			else l++;
		}
	}
    
	p "IMPOSSIBLE" << endl;
	
	return 0;
}

