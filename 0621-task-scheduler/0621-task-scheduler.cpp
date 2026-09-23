class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<vector<int>> v(26, vector<int>(2, 0));

        for (int i = 0; i < tasks.size(); i++) {
            char c = tasks[i];
            v[c - 'A'][1]++;
        }

        int count = 0;

        while (true) {
            sort(v.rbegin(), v.rend());

            if (v[0][1] == 0)
                break;

            int used = 0;

            for (int j = 0; j < n + 1 && j < v.size(); j++) {
                if (v[j][1] == 0)
                    break;

                v[j][1]--;
                used++;
            }

            if (v[0][1] == 0)
                count += used;
            else
                count += n + 1;
        }

        return count;
    }
};