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
    testcase
    {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 1e9;
        bool flag = 0;

        for(int i = 0; i < 26; i++)
        { 
            int c = 0, l = 0, r = n-1;
            flag = 0;

            while(l < r)
            {
               if(s[l] == s[r])
               {
                  l++,r--;
               }
               else
               {
                  if(s[l] == char(i + 97))
                  {
                      c++, l++;
                      p s[l] << "yes" << "->" << i <<  endl;
                  }
                  else if(s[r] == char(i + 97))
                  { 
                     p s[r] << endl;
                     c++,r--;
                  }
                  else
                  {
                    flag = 1;
                    break;
                  }
               }

              
            }

            if(flag == 0 )
            {
                ans = min(ans,c);
                p "yes" << endl;
            }
        }

        if(ans == 1e9) ans = -1;
        p ans << endl;
       
    }
    return 0;
}

