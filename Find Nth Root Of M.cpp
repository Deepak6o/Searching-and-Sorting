int pow(int x, int n)
{
  if(n==0){
    return 1;
  }
  else{
    return x*pow(x,n-1);
  }
}
int NthRoot(int n, int m) {
  // Write your code here.
  int low=1;
  int high=m;
  while(low<=high){
    long long mid=low+(high-low)/2;
    if(pow(mid,n)==m)
    {
      return mid;
    }
    else if(pow(mid,n)>m){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return -1;
}
