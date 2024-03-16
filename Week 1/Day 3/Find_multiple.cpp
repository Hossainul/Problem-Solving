#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    bool flag = true;
    while (a<=b)
    {
        if(a % c == 0)
        {
            cout << a;
            flag = false;
            break;
        }                     
        a++;
    }
    
    if(flag) cout << -1;

    return 0;
}
