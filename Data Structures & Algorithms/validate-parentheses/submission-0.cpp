class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        unordered_map<char,char> map = {{'(', ')'}, {'{', '}'},{'[', ']'}};

        for (int i = 0; i < s.size(); i++){
            if (map.find(s[i]) != map.end()){
                // If opening bracket, push onto stack
                    parentheses.push(s[i]);
            } else {
            // If closing bracket, check it matches top of stack
                // Case 1: No characters left
                if (parentheses.empty() == true){
                    return false;
                }
                // Case 2: Top character doesn't match
                char topCharacter = parentheses.top();
                parentheses.pop();
                if (map[topCharacter] != s[i]){
                    return false;
                }
            }
        }
    
    // If stack empty, all brackets matched
    return parentheses.empty();
    }
};
