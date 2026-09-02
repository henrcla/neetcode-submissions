class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // unordered_map<number, frequency> map; 
        unordered_map<int,int> map;

        // Fill unordered set with each different element of the array and its frequency
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        // Create priority queue of (val, freq)
        priority_queue<pair<int, int>> pq;

        for (auto const& [val, freq] : map) {
            pq.push({freq, val}); // Make first element frequency so pq is ordered in terms of      frequency
        }

        // Create results array to return the k most frequent elements
        vector<int> results;

        // Fill array with top k values of pq, which will be ordered from highest to lowest freq
        for (int i = 0; i < k; i++) {
            results.push_back(pq.top().second);
            pq.pop();
            }
        return results;
        }


};
