class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> v(26, 0);
        for (char c : s) {
            v[c - 'a']++;
        }
        vector<bool> check(26, 0);
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            int x = c - 'a';

            v[x]--;

            if (check[x])
                continue;

            while (!st.empty() && x < st.top() && v[st.top()] > 0) {
                check[st.top()] = false;
                st.pop();
            }

            st.push(x);
            check[x] = true;
        }

        s = "";
        while (!st.empty()) {
            s = char('a' + st.top()) + s;
            st.pop();
        }
        return s;
    }
};