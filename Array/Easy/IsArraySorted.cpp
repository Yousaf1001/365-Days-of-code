There are only optimle Approach to solve  this problem
1)Optimization solution:
explaination:
   1)Iterates array from right to left.
   2) Check is  nums[i]< nums[i-1].if it is not. Then return false and terminates loop.
   3) it's means ,array did not sort.
   4) if yes then return true;

   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(1)


#######    Code    ########

 bool arraySortedOrNot(int arr[], int n) {
        // code here
        bool isSorted=true;
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]<arr[i-1])
              return false;
              
        }
        return isSorted;
    }


##################################################
There are  another question on leetcode same but little bit diffrent.


1)Optimization solution:
explaination:
   1)First, it checks if the vector is already sorted in non-decreasing order.
   2)If it is, then it returns true and exits.
   3)If the vector is not already sorted, it finds the index of the first element that is not in non-decreasing order from right to left.Let's call this index index.
   4) It then creates a new vector called result and copies the elements from index to the end of the vector to the end of result.
   5) It then copies the elements from the beginning of the vector up to index to the end of result.
   6)Finally, it checks if the vector result is sorted in non-decreasing order. If it is, then it returns true. Otherwise, it returns false.
   
   
   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(n)


 

