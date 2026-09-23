class Solution {
public:
    int maxArea(vector<int>& height) { 
        if(height.size()==0) return 0;
        int left = 0 , right = height.size()-1,max = 0;
        for( ; left< right;){
            int area = (right-left)*min(height[left],height[right]);
            if(area>max) max = area;
            if(height[left]<height[right]){
                left++;
            }
            else {
                right--;
            }
        }
        return max;
    }
};