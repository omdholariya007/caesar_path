class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty())return 0;

        sort(points.begin(),points.end());
        int f = points[0][0];
        int s = points[0][1];
        int count = 1;
        for(int i  = 0 ; i < points.size() ;i++ ){
           int newf = max(points[i][0],f);
           int news = min(points[i][1],s);
           if(newf <= news){
            f = newf;
            s = news;

           }
           else {
            count++;
            f = points[i][0];
            s = points[i][1];
           }
        }
        return count ;
    }
};