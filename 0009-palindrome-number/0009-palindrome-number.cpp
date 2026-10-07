class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x),k;
        k = s;
        reverse(s.begin(),s.end());
        if(s == k) return true;
        return false;
    }
};