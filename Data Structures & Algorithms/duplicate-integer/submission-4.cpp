class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    
    // Create a hash table with key (an integer) and a value;
    unordered_map<int, int> numbers;
    
    // If the array includes any numbers
    if (nums.size() > 0){
        // Iterates through array
        for (int i = 0; i <= nums.size() - 1; i++){
            // If number is present in array, updates its value in hash table to 1 (through iteration)
            numbers[nums[i]]++;
            if (numbers[nums[i]] > 1){
                return true;
            }
        }
    }
    return false;
    }
};
