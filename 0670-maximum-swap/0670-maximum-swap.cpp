class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        string d = s;
        char c = '0';
        for( int i =0 ;i<s.size()-1 ;i++){
            for(int j = s.size()-1  ; j >=i+1 ; j--){
                if(s[i]<s[j] && c < s[j]){
                    d= s;
                    swap(d[i],d[j]);
                    c=s[j];
                }
            }
            if(s!=d)return stoi(d);
        }
        return stoi(s) ;
    }
};