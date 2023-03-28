class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        arr[i+1]=arr[i];
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 and arr[j]>key)
            {
                insert(arr,j);
                j--;
            }
            arr[j+1]=key;
        }
    }
};
