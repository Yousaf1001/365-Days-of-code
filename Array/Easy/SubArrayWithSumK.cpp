Problem has been solved in three ways.
1)Brute force solution:
explaination:
   1) First generates all subArrays.
   2)Now find subArrays whose sum are equal to K
   3)Now find subArrays whose length is largest.
   4)Return length of largest of subArrays.
   #### Time and space complexity 
   time complexity : O(N*N*N)
   space complexity:O(1)
   after some modification its becomes:
   O(N*N)
   space complexity:O(1)

Codd:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==0)
            return -1;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==k)
                  length=max(length,(j-i)+1);
            }
        }
        return length;
    }
2)Better Solution:
we use reverse Math and hashing in better solution.
explaination:
   Note:(if There exits a subArray with sum k as (.) by x-k.We get subArray)
   1)First create a map,prefixSum variable and length variable.
   2)Now check any prefix(beyond some (.) point) is (x-k).If yes,then we get subArray.
   3) Now find length of selected subArray by((x-k)->index-(.)->index).
   4)Now compares, this alread store length value and update on basis of larger value.
   5)after all iteration,We have length of largest subArray in largest variable.

Note:Edge case: 
  This technique is not working in case of array has negative or zero value elements.
  by solving this.We use this 
   
   #### Time and space complexity 
   time complexity : O(2n)
   space complexity:O(1)

3)optimization Solution:
explaination:
   1)first condition: we first find element largest then arr[i] element,if yes then  largest =arr[i].
   2)But before assign new number to largest.it already have a number  that are largest then previous number but less then this arr[i] number.
   3) it's means it's secondlargest.
   4)second condition:if  arr[i] larger then secondLargest but less then Largest.it's means to say it's we assign secondLargest=arr[i]
   5) second condition also handle duplicate largest number exception.

   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(1)
