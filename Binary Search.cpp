class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int s=0;
        int e=size-1;
        int mid=s + (e-s)/2;
        while(s<=e)
        {
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                s= mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s + (e-s)/2;

        }
        return -1;
        
        
    }
};
