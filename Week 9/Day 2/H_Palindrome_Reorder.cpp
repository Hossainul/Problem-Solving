// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    string s; cin >> s;
    unordered_map<char,int>mp;
    int n = s.size();

    for(char ch : s)
    {
        mp[ch]++;
    }
    
    char oddchar;
    int odd = 0;

    for(auto[x,y] : mp)
    {
        if(y % 2 != 0)
        {
            odd++;
            oddchar = x;
        }
        
    }

    if(odd <= 1)
    {
        string ans = "";
        string first,second = "";
        for(auto[x,y] : mp)
        {
            first += string(y/2,x);
        }

       
        second = first;
        if(n % 2 == 1)first.push_back(oddchar);
        
        reverse(second.begin(),second.end());

        ans = first + second;

        for(char ch : ans)
        {
            cout << ch;
        }
    }
    else cout << "NO SOLUTION" << endl;
    return 0;
}