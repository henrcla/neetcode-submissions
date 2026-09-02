class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_set<char> previousCharacters; //Stores the characters used in the current sequence
        int maxLength = 0;
        int currentSequence = 0;

        while (right < s.length()){
            while (previousCharacters.find(s[right]) != previousCharacters.end()){ // If character already seen in current
                previousCharacters.erase(s[left]);
                left++; // Iterate start of current sequence
            }
            // If new character insert into set and move onto next character 
            previousCharacters.insert(s[right]);
            currentSequence = right - left + 1;
            if (currentSequence > maxLength){
                maxLength = currentSequence; // Update max sequence length
            }
            right++;
        }
    return maxLength;
    }
};