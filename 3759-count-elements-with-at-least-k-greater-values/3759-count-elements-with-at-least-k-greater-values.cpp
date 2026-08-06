class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ;i++){
            mp[nums[i]]++;
        }
        int count =0;
        int ele = 0;
        auto it = mp.rbegin();
        for(; it!=mp.rend();it++){
            
            if(ele>=k){
                count += it->second;
            }
            ele+=it->second;
        }
        
        
        return count ;
    }
};