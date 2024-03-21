

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        int l = N-1;
        int r = N-1;
        
        vector<long long> v;
        long long int f = -1;
        
        while(l >=0 && r >= 0)
        {
            if(A[l] < 0)
            {
                f = l;
            }
            
            if(r-l + 1 == K)
            {
                if(f!=-1)
                {
                    v.push_back(A[f]);
                }
                else
                {
                    v.push_back(0);
                }
                
                if(f==r)
                {
                    f = -1;
                }
                l--;
                r--;
            }
            else
            {
                l--;
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
        
 }