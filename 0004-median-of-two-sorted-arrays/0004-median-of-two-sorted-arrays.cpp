class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int s = nums1.size();
    for (int j = 0; j < s - 1; j++) {
        for (int i = s - 1; i > j; i--) {
            if (nums1[i] < nums1[i - 1]) {
                std::swap(nums1[i], nums1[i - 1]);
            }
        }
    }
        if(s%2==0){
            return (((nums1[s/2-1])+(nums1[s/2]))/2.0);
        }
        else 
        {
            return nums1[s/2];
        }

    }
};