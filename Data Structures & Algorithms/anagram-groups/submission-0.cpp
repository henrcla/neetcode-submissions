class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp; //Key (alphabetical order), string

        // Sort each individual string into alphabetical order
        for (int i = 0; i < strs.size(); i++){
            string word = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(word);
        }

        vector<vector<string>> results;

        for (auto& [key, words] : mp){
            results.push_back(words);
        }

    return results;

    }
};
