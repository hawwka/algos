class Solution {
public:
    bool isValid(string s) {
        string stack;
        
        for (const auto& p : s) {
            if (p == '(' || p == '[' || p == '{') {
                stack.push_back(p); 
            } 
            else {
                if (stack.empty()) {
                    return false;
                }
                
                char last = stack.back();
                stack.pop_back();

                if (!((last == '(' && p == ')') || 
                      (last == '[' && p == ']') || 
                      (last == '{' && p == '}') )) {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
