class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        if(N<2)
           return -1;
        //Logic start here
        int MaxSum=0;
        for(int i=0;i<N-1;i++)
            maxSum=max(maxSum,arr[i]+arr[i+1]);
        return maxSum;
    }
};
