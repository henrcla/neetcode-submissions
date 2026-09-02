class Solution {
public:
    int evalRPN(vector<string>& tokens) {

    stack<int> numbers;

    // Only need to use one stack, use for loop to differentiate when encountering operation vs number

        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                
                int num2 = numbers.top();
                numbers.pop();
                int num1 = numbers.top();
                numbers.pop();

                if (tokens[i] == "+"){
                    numbers.push(num1 + num2);
                } else if (tokens[i] == "-"){
                    numbers.push(num1 - num2);
                } else if (tokens[i] == "*"){
                    numbers.push(num1 * num2);
                } else if (tokens[i] == "/"){
                    numbers.push(num1 / num2);
                }
            } else {
                numbers.push(stoi(tokens[i]));
            }
        }
    return numbers.top();
    }
};
