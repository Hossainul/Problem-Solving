#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--)
    {
       int n;
       cin >> n;
       
       map<string, int> freqMap;
       vector<pair<string,int>>v;

       for(int j = 0; j<n*3; j++)
       {
          string s;
          cin >> s;
          v.push_back({s,j});
          freqMap[s]++;
       }
           
       
       int p1 = 0;
       if(n == 1)
       {
          for(int i = 0; i<3; i++)
          {
            if(freqMap[v[i].first] == 1)
           {
              cout << 3 << " ";
           }
           else if(freqMap[v[i].first] == 2)
           {
              cout << 1 << " ";
           }
           else cout << 0 << " ";
          }
          cout << "\n";
       }
       else 
       {

       for(int i = 0; i<n*3; i++)
       {   
           if(freqMap[v[i].first] == 1)
           {
              p1 += 3;
           }
           else if(freqMap[v[i].first] == 2)
           {
              p1+= 1;
           }
           else
           {
              p1+= 0;
           }
          
           if((i+1) % n == 0)
           {
            cout << p1 << " ";
            p1 = 0;
           }
       }

       cout << "\n";
       }
       v.clear();
    }
    
    return 0;
}