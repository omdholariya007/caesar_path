class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;
        for(char c :s){
            mp[c]++;
        }
         s="";
         pair<char,int>p ;
        for(auto m = mp.begin() ; m != mp.end();m++){
            char d = m->first;
            int c = m->second;
           if (c % 2 != 0) {
                p = {d, c};
            }
            for(int i = 0 ; i < c/2 ;i++){
                s+=d;
            }
        }
        if(p.second %2 != 0) s+=p.first;
        for(auto m = mp.rbegin() ; m != mp.rend();m++){
            char d = m->first;
            int c = m->second;
            for(int i = 0 ; i < c/2 ;i++){
                s+=d;
            }
        }
        return s;
    }
};