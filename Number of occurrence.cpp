#include<bits/stdc++.h>
int count(vector<int>& arr, int n, int k) {
	// Write Your Code Here
	// unordered_map<int,int>mp;
	// for(int i=0;i<n;i++)
	// {
	// 	mp[arr[i]]++;
	// }
	
	// return mp[x];
	int count=0;
	// for(int i=0;i<n;i++)
	// {
	// 	if(arr[i]==x){
	// 		count++;
	// 	}
	// }
	// return count;
	int low=0;
    int high=n-1;
    int start=-1;
    int end=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            start=mid;
            high=mid-1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    low=0;
    high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            end=mid;
            low=mid+1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
	if(start==-1){
		return 0;
	}
	count=end-start+1;
	return count;

}
