class Solution {
public:
int lower(vector<int>& nums, int target)
{
    int n= nums.size();
    int ans = -1;
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(target==nums[mid])
        {
            ans = mid;
            e=mid-1;
        }
        else if(target>nums[mid])
        {
            s= mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int upper(vector<int>& nums, int target)
{
    int n= nums.size();
    int ans = -1;
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(target==nums[mid])
        {
            ans = mid;
            s=mid+1;
        }
        else if(target>nums[mid])
        {
            s= mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int sp=lower(nums,target);
        int ep=upper(nums,target);
        return {sp,ep};
        // int n=nums.size();
        // int sp=-1;
        // int ep=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(target==nums[i])
        //     {
        //         sp=i;
        //         break;
        //     }
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(target==nums[i])
        //     {
        //         ep=i;
        //         break;
        //     }
        // }
        // return {sp,ep};
        
    }
};
