class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> lastKElements;
        int left = 0;
        int right = 0;

        while (right < nums.size()){

            if (right - left > k){
                lastKElements.erase(nums[left]);
                left++;
            }

            if (lastKElements.find(nums[right]) != lastKElements.end()){
                return true;
            } else {
                lastKElements.insert(nums[right]);
            }
        right++;
        }
    return false;
    }
};