class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int minLength = nums.size() + 1; 

        while (right < nums.size()){
            sum += nums[right];
            while (sum >= target){
                sum -= nums[left];
                if (right - left + 1 < minLength){
                    minLength = right - left + 1;
                }
                left++;
            }
            right++;
        }

        if (minLength == nums.size() + 1){
            return 0;
        }
    return minLength;
    }
};