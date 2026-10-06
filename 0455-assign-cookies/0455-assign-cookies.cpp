class Solution {
public:

    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int h=0 ,c = 0;
        int j = 0;
        for(int i =0 ; i< g.size() && j < s.size(); ){
            h+=s[j];
            if(g[i]<=h){
                c++;

                i++;
            }
            h=0;
            j++;
        }
        return c;
    }
};