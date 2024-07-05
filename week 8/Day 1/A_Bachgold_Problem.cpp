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
    int n; cin >> n;

    if(n % 2 == 0)
    {
        print n / 2 << endl;
        for(int i = 0; i < n / 2; i++)
        {
            print 2 << " ";
        }
    }
    else
    {   
        int num = n / 2;
        

        print num  << endl;

        while(num - 1!= 0)
        {
            print 2 << " ";
            num--;
        }

        print 3 << " ";
    }
    return 0;
}