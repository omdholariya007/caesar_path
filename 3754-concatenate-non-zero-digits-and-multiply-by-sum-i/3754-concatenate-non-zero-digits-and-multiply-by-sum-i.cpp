class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int m=0;
        for(int i =0 ; i < s.size() ; i++){
            if(s[i] == '0'){
                s.erase(s.begin()+i);
                i--;

            }
            else{
               m += s[i]-'0';
            } 
        }
        if(s.empty())return 0;
        long long l = stoll(s)*m;
        return l;

    }
};