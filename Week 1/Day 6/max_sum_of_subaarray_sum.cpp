class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int l = 0;
        int r = 0;
        
        long long int sum  = 0;
        long long int ans = 0;
        
        while(l<N && r <N)
        {   
            sum += Arr[r];
            if((r-l)+1 == K)
            {
             
              
                ans = max(sum,ans);
                
                sum = sum - Arr[l];
                l++;
                r++;
                
            }
            else 
            {
                r++;
            }
        }
        
        return ans;
    }
};