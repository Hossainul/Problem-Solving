
#include<bits/stdc++.h>
using namespace std;
int main(){
long long  t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;

    long long  arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<long long>());
    long long  val=0;
   
    long long  ans=0;
    
   for(long long  i=0;i<n;i++){
        if(val<arr[i]){
            val=0; ans++;
        }
        val^=arr[i];
    }
    cout<<ans<<"\n";
/*   for(int i=0;i<n;i++)
   {
        if(p<arr[i])
        {
           p=0;
            ans++;
           
        }  
            p^=arr[i];
        
}
   cout<<ans<<endl;
   */
}

return 0;
}
