class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool can = 1;
        for(int i : flowerbed){
            
            if(i == 1 && can == 0) n++;
            else if (i == 1) can = 0;
            else if(i == 0 ){
                if(can){
                    can = 0;
                    n--;
                }
                else {
                    can = 1;
                }
            }
        }
        if(n>0)return 0;
        return 1;
    }
};