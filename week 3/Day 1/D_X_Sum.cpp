#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
using namespace std;

vector<pair<int,int>> d = {{-1,-1},{1,1},{-1,1},{1,-1}};
int arr[205][205];
int res = 0;
int n,m;

bool valid(int i , int j)
{
   return (i >= 0 && i < n && j >=0 && j < m);
}

int cal(int i, int j)
{   
    res += arr[i][j];
    for(int k = 0; k <4; k++)
    {
        int ci = i + d[k].first;
        int cj = j + d[k].second;
        
        while(valid(ci,cj))
        {
            res += arr[ci][cj];
            ci += d[k].first;
            cj += d[k].second;
        }

       
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int ans = 0;
        cin >> n >> m;

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
               cin >> arr[i][j];
            }
        }

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {   
                
                ans = max(ans,cal(i,j));
                res = 0;
              
            }
           
        }

        p ans << endl;
        
    }
    return 0;
}