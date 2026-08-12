class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()<k)return 0;
        unordered_map<char,int>mp;
        for(char c :s){
            mp[c]++;
        }
        for(int i =  0; i < s.size() ;i++ ){
            if(mp[s[i]]<k){
                return max( 
                longestSubstring(s.substr(0,i),k),
                longestSubstring(s.substr(i+1),k)
                );
            }
        }
       return s.size();
    }
};