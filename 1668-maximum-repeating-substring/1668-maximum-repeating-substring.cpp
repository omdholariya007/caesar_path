class Solution {
public:
    int maxRepeating(string s, string word) {
        if(word.size() > s.size())return 0;
        int count = 0;
        int ans =0;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == word[0]){
                int j = 0 ;
                count =1 ;
                
                for( ; j < s.size();j++){
                    if(i >= s.size() || s[i] != word[j%word.size()]){
                        count--;
                        i=i-j;
                        break;
                    }
                    if(i == s.size()-1 && j%word.size() != word.size()-1){
                        count--;
                        i=i-j;
                        break;
                    }
                    if((j+1) % word.size() == 0 && j+1 < s.size())count++;
                    i++;  
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};