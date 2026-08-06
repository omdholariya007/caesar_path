class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto it = mp.rbegin() ; it!=mp.rend();it++){
            int s = it->second;
            if(k-s<=0)return it->first;
            k=k-s;
        }
        return 0;
    }
};