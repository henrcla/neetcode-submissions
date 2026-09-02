class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> countS;
        unordered_map<char,int> countT;

        // Check condition: words must be same length to be anagram
        if (s.length() != t.length()){
            return false;
        }

        // For anagram position does not matter, so can just count characters in each word
        for (int i = 0; i < s.size(); i++){
            countS[s[i]]++; // Updates count of specific character s[i]
            countT[t[i]]++;
        }

        // Compares two hash tables (will be 26 in size)
        for (int i = 0; i < countS.size(); i++){
            if (countS[i] != countT[i]){
                return false;
            }
        }
        return true;
    }

};
