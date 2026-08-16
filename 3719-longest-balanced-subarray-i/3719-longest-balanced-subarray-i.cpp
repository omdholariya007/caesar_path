class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> seen;
            int even = 0;
            int odd = 0;

            for (int j = i; j < nums.size(); j++) {

                if (!seen.count(nums[j])) {
                    seen.insert(nums[j]);

                    if (nums[j] % 2 == 0)
                        even++;
                    else
                        odd++;
                }

                if (even == odd)
                    ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};