class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    bool hasAllNegativeNumbers=true;
    double maxNegativeSum=-10000000000,curSum=0,maxSum=0;
   
   
      for(int i = 0; i < nums.size(); i++) {
         if(hasAllNegativeNumbers && nums[i] >= 0) {
	                hasAllNegativeNumbers = false;
	            } else if(hasAllNegativeNumbers && nums[i] < 0 && maxNegativeSum < nums[i]) {
	                maxNegativeSum = nums[i];
	            }
	            
	            curSum += nums[i];
	            if(curSum < 0) {
	                curSum = 0;
	            }
	            if(maxSum < curSum) {
	                maxSum = curSum;
	            }
      }
	        
        if(hasAllNegativeNumbers)
            return maxNegativeSum;
        else
            return maxSum;
	     
        
    }
};