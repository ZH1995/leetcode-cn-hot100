class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        if (1 >= size) {
            return false;
        }

        map<char, char> match;
        map<char, char>::iterator it;
        match['('] = ')';
        match['['] = ']';
        match['{'] = '}';
        stack<char> stk;
        for (int i = 0; i < size; i ++) {
            if (stk.empty()) {
                stk.push(s[i]);
            } else {
                char stkTop = stk.top();
                it = match.find(stkTop);    
                if (it != match.end() && match[stkTop] == s[i]) {
                    stk.pop();
                } else {
                    stk.push(s[i]);
                }
            }
        }

        return stk.empty() ? true : false;
    }
};