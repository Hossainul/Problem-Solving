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
        string a,b; cin >> a >> b;

        int A = 0;
        int B = 0;
        if(a == b) 
        {
            p "=" << endl;
            continue;
        }
        else
        {
            if(a.size() > 1 && a.back() == 'S' || b.size() > 1 &&
            b.back() == 'S')
            {   

                if(a.back() == 'S' && b.back() == 'S')
                    {
                        if(a.size() < b.size()) p ">" << endl;
                        else p "<" << endl;
                        continue;
                    }
                    else if(a.back() == 'S') A+= (a.size()-1)*(-10) + 1;
                    else B+= (b.size()-1)*(-10) + 1;
                    
            }
                
            if(a.back() != 'S')
            {
                for(int i = 0; i < a.size(); i++)
                {
                    if(a[i] == 'X') A+= 10;
                    else if(a[i] == 'M') A+= 2;
                    else if(a[i] == 'S') A+= 1;
                    else A+=3;

                }
            }

            if(b.back() != 'S')
            {
                for(int i = 0; i < b.size(); i++)
                {
                    if(b[i] == 'X') B+= 10;
                    else if(b[i] == 'M') B+= 2;
                    else if(b[i] == 'S') B+= 1;
                    else B+=3;

                }
            
            }
                //p A << B << endl;
                if(A > B) p ">" << endl;
                else p "<" endl;
            
        }
           
    }
    return 0;
}