// Bismillah.
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for (int i = 0; i < n; i++)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    faster;
    testcase
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            swap(a, b);

        if (a > 2 * b)
        {
            p "NO" << endl;
        }
        else
        {
            a %= 3;
            b %= 3;
            if (a < b)
                swap(a, b);
            if ((a == 2 && b == 1) || (a == b && b == 0))
            {
                p "YES" << endl;
            }
            else
                p "NO" << endl;
        }
    }
    return 0;
}
