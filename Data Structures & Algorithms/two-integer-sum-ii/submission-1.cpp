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

    unordered_map<int,int> map;

        for (int i = 0; i < numbers.size(); i++){
            int complement = target - numbers[i];
            if (map.find(complement) != map.end()){
                return {map[complement] + 1, i + 1};
            }
            map.insert({numbers[i], i});
        }
    return {};
    }
};
