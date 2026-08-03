class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i< nums.size() ;i++){
            mp[nums[i]]++;
        }
        auto it = mp.rbegin();

        for(int i = 1;i< nums.size();i+=2){
            if(it->second == 0) it++;
            nums[i] = it->first;
            it->second--;            
        }

        for(int i = 0;i< nums.size();i+=2){
            if(it->second == 0) it++;
            nums[i] = it->first;
            it->second--;            
        }
        return ;
    }
};