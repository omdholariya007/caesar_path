class Solution {
public:
    int mod = 1337;

    int power(int a, int b) {
        int ans = 1;

        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % mod;
            }

            a = (a * a) % mod;
            b /= 2;
        }

        return ans;
    }

    int superPow(int a, vector<int>& b) {
        a %= mod;

        int ans = 1;

        for (int digit : b) {
            ans = power(ans, 10);
            ans = (ans * power(a, digit)) % mod;
        }

        return ans;
    }
};