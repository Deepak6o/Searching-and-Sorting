int findmax(vector<int> &arr)
{
	int maax=INT_MIN;
	for(int i=0;i<arr.size();i++)
	{
		maax=max(maax,arr[i]);
	}
	return maax;
}
int calculatesum(vector<int>& arr, int l)
{
	int n=arr.size();
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=ceil(double(arr[i])/double(l));
	}
	return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int low=1;
	int high=findmax(arr);
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		int sum=calculatesum(arr,mid);
		if(sum<=limit)
		{
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return low;
}
