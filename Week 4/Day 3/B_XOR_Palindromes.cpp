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
    
    testcase
    {
        int n; cin >> n;
        string s; cin >> s;
         
        int match = 0;
        int shouldchange = 0;
        int highestchange = 0;
        if(n % 2 == 0) highestchange = 0;
        else highestchange = 1;

        
        
        int l = 0;
        int r = s.length()-1;

        while (l < r)
        {   
           // p s[l] << "->" << s[r] << endl;
            if(s[l] == s[r]) match += 2;
            else shouldchange += 1;

            l++;
            r--;
        }
        
        //p shouldchange << "->" << match << endl;
        for(int i = 0; i < s.length()+1; i++)
        {
            int mst = i - shouldchange;

            if(mst < 0) p 0;
            else if(mst == 0) p 1;
            else if(n % 2 == 0 && mst % 2 == 1) p 0;
            else 
            {
                if(mst <= match + highestchange)
                {
                    p 1;
                }
                else p 0;
            }
        }

        p endl;
    }
    return 0;
}