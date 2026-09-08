class Solution {
public:
    int characterReplacement(string s, int k) {
        // Use a sliding window
        // For k exceptions, keep extending window
        // Keep track of longest window

        unordered_map<char, int> frequencyCounter; // Stores character, frequency

        int left = 0;
        int right = 0;
        int longestSubString = 0;
        int maxFreq = 0;

        while (right < s.length()){
            frequencyCounter[s[right]]++;
            maxFreq = max(maxFreq, frequencyCounter[s[right]]);

    // While the number of elements in the substring that aren't the most frequent element is less than k (i.e. less the k exceptions from the most common element)
            while ((right - left + 1) - maxFreq > k){
                frequencyCounter[s[left]]--;
                left++;
            }

            // Update longest sub string so far
            if (right - left + 1 > longestSubString){
                longestSubString = right - left + 1;
            }
        right++;
        }
    return longestSubString;
    }
};
