class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<pair<string,int>>s;
        for(int i = 0 ; i <nums.size() ;i++){
            string p = to_string(nums[i]);
            s.push_back({p,(int)p.size()});
        }
        sort(s.begin(),s.end(), []
         (const pair<string,int>&a, const pair<string,int>&b) { 
         return a.first+b.first>b.first+a.first ; });
        
        string n = "";
        for(auto o : s){
            n+=o.first;
        }
        if(n.size()>0 && n[0] ==  '0')return "0";
        return n;
    }
};