class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

    // Version works but is inefficient (O(n^2)). Going to try to use hash map round 2
    /*   for (int i = 0; i < numbers.size(); i++){
            for (int j = 0; j < numbers.size(); j++){
                if (numbers[i] + numbers[j] == target && i != j){
                    return {i + 1,j + 1};
                }
            }
        }
    return {};
    */

    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right){
        if (numbers[left] + numbers[right] == target){
            return {left+1, right+1};
        } else if (numbers[left] + numbers[right] > target){
            right--;
        } else {
            left++;
        }
    }
    return{};

    /*
    // Map for fast retrieval: (number, index) -> as want to return indexes
    unordered_map<int,int> map;

        for (int i = 0; i < numbers.size(); i++){
            int complement = target - numbers[i];
            if (map.find(complement) != map.end()){
                return {map[complement] + 1, i + 1}; // Adjust for 1 based indexing
            }
            map.insert({numbers[i], i});
        }
    return {};
    */
    }
};
