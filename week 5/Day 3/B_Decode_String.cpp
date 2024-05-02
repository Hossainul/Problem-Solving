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
        string news;

        for(int i = 0; i< s.length(); i ++)
        {
           if(i + 2 < n && s[i+2] == '0' && s[i+3] != '0')
           {
              int x = (s[i] - '0') * 10 + s[i+1] - '0';
              news.push_back((char) (x + 96));
              i += 2;
           }
           else
           {
               news.push_back((char)(s[i]-'0' + 96));
           }
        }
        
        p news;
        p endl;
        
    }
    return 0;
}
