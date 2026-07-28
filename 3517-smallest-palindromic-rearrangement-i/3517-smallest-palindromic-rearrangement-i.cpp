class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>v(26,0);
        for(char c : s){
            v[c-'a']++;
        }
        s="";
        char t='0';
        for(int i = 0 ; i < 26 ; i++){
            if(v[i] %2 !=0) t = 'a'+i;
            for(int j = 0 ; j <v[i]/2;j++ ){
                char c = 'a'+i;
                s+=c;
            }
        }
        if(t != '0')s+=t;
        for(int i = 25 ; i >=0 ; i--){
            for(int j = 0 ; j <v[i]/2;j++ ){
                char c = 'a'+i;
                s+=c;
            }
        }
        return s;
    }
};