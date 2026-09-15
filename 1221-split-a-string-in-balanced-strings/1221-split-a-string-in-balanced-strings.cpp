class Solution {
public:
    int balancedStringSplit(string s) {
        int p = 0;
        if(s[0]== 'L')p = -1;
        else p = 1;
        int count=0;
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i]=='L')p--;
            else p++;
            if(p == 0)count++;
        }
        return count;

    }
};