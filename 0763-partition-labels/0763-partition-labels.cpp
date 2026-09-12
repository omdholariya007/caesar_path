class Solution {
public:
    vector<int> partitionLabels(string s) {
        int mp[26]={};
        vector<int>v;
        for(int i = 0 ;i<s.size();i++ ){
            mp[s[i]-'a']=i;
        }
        int last = mp[s[0]-'a'];
        int fir = 0;

        for(int i = 0 ; i < s.size() ;i++){
            last = max(last,mp[s[i]-'a']);
            if(last == i){
                v.push_back(last-fir+1);
                fir=i+1;
                
            }
        }

        return v;
    }
};