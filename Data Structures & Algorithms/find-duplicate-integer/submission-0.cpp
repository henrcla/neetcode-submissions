class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_set<int> values;

        for (int i = 0; i < nums.size(); i++){
            if (values.find(nums[i]) == values.end()){
                values.insert(nums[i]);
            } else {
                return nums[i];
            }
        }
    return -1;
    }
};
