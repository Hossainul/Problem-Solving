#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    map<char,bool>mp;
    
    bool flag = true;
    for(char x : s)
    {
        mp[x] = true;
    }

    for(char i = 'a'; i <='z'; i++)
    {
        // if(mp.find(i) == mp.end())
        // {
        //     cout << i;
        //     flag = false;
        //     break;
        // } or
        if(!mp[i])
        {
            cout << i;
            flag = false;
            break;
        }
    }

    if(flag) cout <<"None";
    return 0;
}