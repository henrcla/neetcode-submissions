class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

    // Version works but is inefficient (O(n^2)). Going to try to use hash map round 2
        for (int i = 0; i < numbers.size(); i++){
            for (int j = 0; j < numbers.size(); j++){
                if (numbers[i] + numbers[j] == target && i != j){
                    return {i + 1,j + 1};
                }
            }
        }
    return {};
    }
};
