//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   long long isPossible(int arr[],int n,int k,long long mid)
   {
       long long paintersum=1;
       long long  timee =0;
       for(int i=0;i<n;i++)
       {
           if(timee+arr[i]<=mid)
           {
               timee+=arr[i];
           }
           else
           {
               paintersum++;
               if(paintersum>k or arr[i]>mid)
               {
                   return false;
               }
               timee=arr[i];
           }
       }
       return true;
   }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
       
       long long  s=0;
       long long  sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
       long long  e=sum;
        long long  ans = -1;
        while(s<=e)
        {
           long long  mid = s + (e-s)/2;
            if(isPossible(arr,n,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
