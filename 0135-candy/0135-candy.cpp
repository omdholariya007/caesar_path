class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>l(ratings.size(),1),r(ratings.size(),1);
        for(int i = 0 ; i < ratings.size()-1 ;i++){
            if(ratings[i] < ratings[i+1]) l[i+1] = l[i]+1;
            if(ratings[ratings.size()-i-1] < ratings[ratings.size()-i-2])
            r[ratings.size()-i-2]= r[ratings.size()-i-1]+1;
        }
        int count = 0 ;
        for(int i = 0 ; i < ratings.size() ;i++){
            count += max(r[i],l[i]);
        }
        return count;
    }
};
    