class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int w, int l) {
        vector<pair<int, int>> v;
        for (int i = 0; i < values.size(); i++) {
            v.push_back({values[i], labels[i]});
        }
        sort(v.rbegin(), v.rend());

        unordered_map<int, int> mp;
        int sum = 0;

        for (int i = 0; i < v.size() && w > 0; i++) {
            int value = v[i].first;
            int label = v[i].second;

            if (mp[label] < l) {
                sum += value;
                mp[label]++;
                w--;
            }
        }

        return sum;
    }
};
