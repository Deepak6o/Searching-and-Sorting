class Solution {
public:
long long int binarysearch(int n)
{
    int s=0;
    int e=n;
    long long int ans=-1;
    while(s<=e)
    {
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square<n)
        {
            ans=mid;
            s=mid+1;

        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

// float value
double moreprecision(int n,int precison,int tempSol)
{
    double factor=1;
    double ans =tempSol;
    for(int i=0;i<precison;i++)
    {
        facto=factor/10;
        for(double j= ans ;j*j<n;j+=factor)
        {
            ans=j;
        }
    }
    return ans;
}

    int mySqrt(int x) {
        // return sqrt(x);
        return binarysearch(x);
    
   
        
    }
};
