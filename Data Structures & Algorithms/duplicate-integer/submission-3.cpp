class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    
    unordered_map<int, int> numbers;
    
    if (nums.size() > 0){
        for (int i = 0; i <= nums.size() - 1; i++){
            numbers[nums[i]]++;
            if (numbers[nums[i]] > 1){
                return true;
            }
        }
    }
    return false;
    }
};
