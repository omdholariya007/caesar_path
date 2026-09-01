class Solution {
public:
    int myAtoi(string s) {
        int count = 0,index=0 ,inc=0,add=0;
        string str="";
        for(char c :s){
            if(c=='-'){
                count++;
                inc++;
                break;
            }
            else if (c=='+') {
                add++;
                inc++;
                break;
            }
            else if (c == ' ') inc++;
            else break;  
        }
        for(int i = inc;i<s.size();i++){
            char c = s[i];
            if(isdigit(c)){
                str+=c;
            }
            else break;
        }
        if (str == "") return 0;
        long long dig = 0;
        for (char c : str){
            dig = dig*10+(c-'0');
            if (count==0&&dig>INT_MAX) return INT_MAX;
            if(count>0&&-dig<INT_MIN) return INT_MIN;
        }
        if (count>0) dig= -dig;
        return dig;
    }
};