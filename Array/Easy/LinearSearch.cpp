There are only optimle Approach to solve  this problem
1)Optimization solution:
explaination:
   1)Traverse Array from 0 to last index of Array.
   2) If element found,return 1;
   3) otherwise return -1;

   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(1)

code:
  int searchInSorted(int arr[], int N, int k) 
    { 
       if(N==0)
          return -1;
       for(int i=0;i<N;i++)
        {
            if(arr[i]==k)
              return 1;
        }
        return -1;
       
    }