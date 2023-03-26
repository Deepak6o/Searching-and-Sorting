class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(target==nums[i])
        //     {
        //         return i;
        //     }
        // }
        // return -1;
             int n=nums.size();
        int l=0;
        int r=n-1;
        
         int index;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]<=nums[(mid+n-1)%n] and nums[mid]<=nums[(mid+1)%n])
             {
                index=mid;
            break;
           }       
             else if(nums[mid]>nums[n-1])
                 l=mid+1;
             else
                r=mid-1;
        }
        
         l=0;r=index-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(nums[mid]==target)
                 return mid;
             else if(target>nums[mid])
                 l=mid+1;
             else
                 r=mid-1;
         }
      
         l=index;r=n-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(nums[mid]==target)
                 return mid;
             else if(target>nums[mid])
                 l=mid+1;
             else
                 r=mid-1;
         }
         return -1;
    }
};
