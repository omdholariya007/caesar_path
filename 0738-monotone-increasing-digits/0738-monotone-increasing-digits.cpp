class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        
     string s = to_string(n);
     string dum = "";

     for(int i = 0 ; i < s.size()-1 ;i++){
        dum+=s[i];
        if(s[i]>s[i+1]){
            
            int d = stoi(dum);
            d-=1;
            dum=to_string(d);
            for(int j = i+1 ; j<s.size() ; j++){
                dum+='9';
            }
            d = stoi(dum);
            return monotoneIncreasingDigits(d);

        }
        
     }
     return n;

    }
};