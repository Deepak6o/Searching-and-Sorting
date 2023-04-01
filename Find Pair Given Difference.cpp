//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    // int diff=0;
    // for(int i=0;i<size;i++)
    // {
    //     for(int j=i+1;j<size;j++)
    //     {
    //         if(abs(arr[i]-arr[j])==n)
    //         {
    //             return true;
    //         }
    //     }
    // }
    // return false;
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        int s=i+1;
        int e = size-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]-arr[i]==n)
            {
                return true;
            }
            if(arr[mid]-arr[i]<n)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return false;
    
}
