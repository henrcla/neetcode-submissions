class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> countS;
        unordered_map<char,int> countT;

        if (s.length() != t.length()){
            return false;
        }

        for (int i = 0; i < s.size(); i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        for (int i = 0; i < countS.size(); i++){
            if (countS[i] != countT[i]){
                return false;
            }
        }
        return true;
    }

};
