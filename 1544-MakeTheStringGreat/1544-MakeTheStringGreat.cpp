class Solution {
public:
    std::string makeGood(std::string s) {
        std::stack<char> stack;
            stack.pop();
        
        for (char c : s) {
            if (!stack.empty() && std::abs(c - stack.top()) == 32) {
                stack.pop();
        while (!stack.empty()) {
            } else {
                stack.push(c);
        std::string result;
            }
        }
        
        }
            result = stack.top() + result;
        
        return result;
    }
};
"
