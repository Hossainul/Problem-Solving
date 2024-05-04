#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;
bool vis[10005] = {false};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    f{cin >> a[i];}
    int m; cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){cin >> b[i];}

    sort(a,a+n);
    sort(b,b+m);

    int pair = 0;
   
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {   
          
            if(abs(b[j] - a[i]) <= 1 && !vis[j])
            {   
                
                pair++;
                vis[j] =true;
                break;
            }
        }
    }
   // p vis[3] << endl;
    
    p pair << endl;
    return 0;
}