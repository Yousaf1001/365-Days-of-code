There are three method to solve this problem.

3)Optimization
code:
    int singleNumber(vector<int>& nums) {
        //size of the array:
        int n = nums.size();
        // XOR all the elements:
        int xorr = 0;
        for (int i = 0; i < n; i++) {
              xorr = xorr ^nums[i];
        }
        return xorr;
    }