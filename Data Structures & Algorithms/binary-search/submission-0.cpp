class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int minIndex = 0, maxIndex = nums.size() - 1;

        while (minIndex <= maxIndex){
            int currentIndex = minIndex + ((maxIndex - minIndex)/2);
            if (nums[currentIndex] > target){
                maxIndex = currentIndex - 1;
            } else if (nums[currentIndex] < target){
                minIndex = currentIndex + 1;
            } else {
                return currentIndex;
            }
        }
        return -1;
    }
};
