class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> lastKElements;
        int left = 0;

        for (int right = 0; right < nums.size(); right++){

            if (right - left > k){
                lastKElements.erase(nums[left]);
                left++;
            }

            if (lastKElements.find(nums[right]) != lastKElements.end()){
                return true;
            } else {
                lastKElements.insert(nums[right]);
            }
        }
    return false;
    }
};