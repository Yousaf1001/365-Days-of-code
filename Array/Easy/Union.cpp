There are only optimle and Brute force Approach to solve  this problem
1)Optimization solution:
   
    For Checking Optimle solution detail visit website
    website_URL:https://takeuforward.org/data-structure/union-of-two-sorted-arrays/

   #### Time and space complexity 
   time complexity : O(n+m)
   space complexity:O(n+m)

   vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>result;
        if(n==0 && m==0)
          return result;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                if(result.size() == 0 || result.back()!=arr1[i])
                {
                    result.push_back(arr1[i]);
                }
                i++;
            }
            else 
            {
                if(result.size() == 0 || result.back()!=arr2[j])
                {
                    result.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i<n)
        {
                if(result.back()!=arr1[i])
                {
                    result.push_back(arr1[i]);
                }
                i++;
        }
        while(j<m)
        {
                if(result.back()!=arr2[j])
                {
                    result.push_back(arr2[j]);
                }
                j++;
        }
        
        return result;
        
    }
};
