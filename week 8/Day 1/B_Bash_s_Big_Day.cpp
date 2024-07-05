#include<bits/stdc++.h>
using namespace std;
int N;
unordered_map<int, int> factors;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> N;

    while(N--)
    {
        int strength;
        cin >> strength;

        //int root = sqrt(strength);
        for(int i = 2; i * i <= strength; i++)
        {
            if(strength%i == 0)
                factors[i]++;

            while(strength%i == 0) strength /= i;
        }

        if(strength > 1) 
        {
            factors[strength]++;
            //cout << "yes" << endl;
        } 
    }

    int ans = 1;
    for(auto it = factors.begin(); it != factors.end(); it++)
    {
        ans = max(ans, (*it).second);
        //cout << it->first << "->" << it->second << endl;
    }

    cout << ans << endl;

    return 0;
}
