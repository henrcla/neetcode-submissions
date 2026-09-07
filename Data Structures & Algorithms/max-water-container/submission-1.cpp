class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int right = heights.size() - 1;
        int left = 0;
        int maxContainer = 0;

        while (left <= right){
            int currentVolume = (right - left) * min(heights[left], heights[right]);
                if (currentVolume > maxContainer){
                    maxContainer = currentVolume;
                }
                if (heights[right] > heights[left]){ // Choose greedy option
                    left++; 
                } else {
                    right--;
                }
        }

    return maxContainer;
    }
};



