#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,T;
    cin >> A >> B >> T;
    
    int res = 0;
    bool flag = 1;
    for(int i = 1; i< T+0.5; i++)
    {
        if(A*i < T+0.5)
        {   
            //cout << A*i << "->" << T+0.5 << B << endl;
            res += B;
            flag = 0;
        }
        else
        {
            break;
        }
    }

    if(flag) cout << 0 << endl;
    else cout << res;
    return 0;
}