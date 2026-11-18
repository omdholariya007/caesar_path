class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int s = 0;
        for (auto[k,v] : mp){
            if(v > 1){
                if( v== 2)s += 1;
                else if(v == 3)s += 3;
                else {
                    v--;
                    s+= (v*(v+1)/2);
                }
                
            }
        }
        return s;
    }
};