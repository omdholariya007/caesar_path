class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        for(int i = 0 ;i<=n;i++){
            v[i] = v[i/2]+ (i%2);
            // v[i] = v[i>>1]+(v&1); both are same 
        }
        return v;
    }
};