#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;

        int k = 0,
        ans=INT_MIN;
        s=s+s;
        //cout << s.length() << endl;
        for(int i=s.length()-1;i>=0;i--)
        {   
            //cout << i << "->" << s[i] << endl;
            if(s[i]=='g')
            {
                k=i;
            }
            if(s[i]==c)
            {
                ans= max(ans,k-i);
            }
        }
            cout<<ans<<endl;
    }
    
    return 0;
    
    }