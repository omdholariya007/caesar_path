class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        vector<vector<int>>v(nums.size(),vector<int>(2,0));
        for(int i = 0 ; i <nums.size();i++){
            v[i][0]=nums[i];
            v[i][1]=i;
        }
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        

        for(int i =0 ; i < nums.size() ;){
            if(v[i][0]==0){
                i++;
                continue;
            }
            int val =  v[i][0];
            vector<int>f;
            for(int j = 0 ; j <val;j++){
                f.push_back(v[i][1]);
                i++;
            }
            ans.push_back(f);
        }
        return ans;
    }
};