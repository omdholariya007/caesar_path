class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            set<char> st;
            for (int j = i; j < s.size(); j++) {
                st.insert(s[j]);
                bool nice = true;
                for (char c : st) {
                    if (isupper(c) && !st.count(tolower(c))) nice = false;
                    if (islower(c) && !st.count(toupper(c))) nice = false;
                }
                if (nice && j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
            }
        }

        return ans;
    }
};