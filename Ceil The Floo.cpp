pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
    // pair<int,int> ans;
    // sort(arr,arr+n);
    // int floor=-1;
    // int ceil=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==x)
    //     {
    //         floor=x;
    //         ceil=x;
    //         ans.first=floor;
    //          ans.second=ceil;
    //         return ans;
    //     }
    // }
    // int i=0;
    // while(arr[i]<x)
    // {
    //     i++;
    // }
    // if(i<=0)
    // {
    //     floor=-1;
    // }
    // else
    // {
    //     floor=arr[i-1];
    // }
    // if(i>=n)
    // {
    //      ceil=-1;
    // }
    // else
    // {
    //      ceil=arr[i];
    // }
    // ans.first=floor;
    // ans.second=ceil;
    // return ans;
    sort(arr,arr+n);
	int ceil = lower_bound(arr,arr+n,x)-arr;
	int floor = upper_bound(arr,arr+n,x)-arr;
	return {floor == 0?-1:arr[floor-1],ceil == n?-1:arr[ceil]};
    
}
