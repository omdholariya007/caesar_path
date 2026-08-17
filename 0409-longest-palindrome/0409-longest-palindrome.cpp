class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char c : s ){
            mp[c]++;
        }
        int count = 0;
        bool odd = false;
        for(auto t : mp){
            if(t.second%2 != 0) odd =true;
            if(t.second >1){
                if(t.second%2 != 0)count--;
                count += t.second; 
            }
            
            
            
        }
        if(odd)count+=1;
        return count;

    }
};