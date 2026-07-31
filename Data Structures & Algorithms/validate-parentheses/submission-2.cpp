class Solution {
public:
    bool isValid(string s) {
        std::stack<char>check;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[' || s[i] == '{' ||s[i] == '('){
                check.push(s[i]);
            }
            else if (s[i] == ']') {
                if (!check.empty() && check.top() == '[') {
                    check.pop();
                }
                else{
                    return false;
                }
            }
            else if (s[i] == ')') {
                if (!check.empty() && check.top() == '(') {
                    check.pop();
                }
                else {
                    return false;
                }
            }
            else if (s[i] == '}') {
                if (!check.empty() && check.top() == '{') {
                    check.pop();
                }
                else {
                    return false;
                }
            }

        }
        return check.empty();
    }
};
