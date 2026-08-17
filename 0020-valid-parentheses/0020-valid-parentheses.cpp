class Solution {
public:
    bool isValid(string S) {
        stack<char> s;

        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '(' || S[i] == '{' || S[i] == '[') {
                s.push(S[i]);
            }
            else {
                if (s.empty()) {
                    return false;
                }

                if ((S[i] == ')' && s.top() == '(') ||
                    (S[i] == '}' && s.top() == '{') ||
                    (S[i] == ']' && s.top() == '[')) {
                    s.pop();
                }
                else {
                    return false;
                }
            }
        }

        return s.empty();
    }
};
