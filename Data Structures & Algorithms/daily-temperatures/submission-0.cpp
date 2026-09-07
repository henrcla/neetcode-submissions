class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> tempIndices;
        vector<int> results(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++){
            while (!tempIndices.empty()){
                if (temperatures[i] > temperatures[tempIndices.top()]){
                    results[tempIndices.top()] = i - tempIndices.top();
                    tempIndices.pop();
                } else {
                    break;
                }
            }
            tempIndices.push(i);
        }
    return results;
    }
};
