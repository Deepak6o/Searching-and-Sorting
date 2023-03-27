class Solution {
public:
int isPossible(vector<int>& weights, int days,int mid)
{
    int count=1;
    int Daysum=0;
    for(int i=0;i<weights.size();i++)
    {
        if(Daysum+weights[i]<=mid)
        {
            Daysum+=weights[i];
        }
        else
        {
            count++;
            if(count>days or weights[i]>mid)
            {
                return false;
            }
            Daysum=weights[i];
        }
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        if(weights.size()<days)
        {
            return -1;
        }
        int s=0;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
       int e=sum;
       int ans=-1;
       while(s<=e)
       {
           int mid=s+(e-s)/2;
           if(isPossible(weights,days, mid))
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
