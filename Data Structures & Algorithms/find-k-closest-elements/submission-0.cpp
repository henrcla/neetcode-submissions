class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> results;
        vector<vector<int>> distanceFromTarget;

        for (int i = 0; i < arr.size(); i++){
            int distance = abs(arr[i] - x);
            distanceFromTarget.push_back({distance, arr[i]});
        }

        sort(distanceFromTarget.begin(), distanceFromTarget.end());

        for (int i = 0; i < k; i++){
            results.push_back(distanceFromTarget[i][1]);
        }

        sort(results.begin(), results.end());

    return results;
    }
};