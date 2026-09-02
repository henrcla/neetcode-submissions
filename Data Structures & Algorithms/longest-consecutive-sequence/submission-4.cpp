class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Sort array in ascending order
        sort(nums.begin(), nums.end());
        
        int currSequenceLength = 0;
        int maxLength = 0;

        if (nums.size() > 0){
            maxLength = 1;
            currSequenceLength = 1;
        }

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1] + 1){
                currSequenceLength++;
            } else if (nums[i] != nums[i-1]) {
                if (currSequenceLength > maxLength){
                    maxLength = currSequenceLength;
                }
                currSequenceLength = 1;
            }
        }

        // Check if array ends on the largest sequence
        if (currSequenceLength > maxLength){
            maxLength = currSequenceLength;
        }

    return maxLength;
    }
};
