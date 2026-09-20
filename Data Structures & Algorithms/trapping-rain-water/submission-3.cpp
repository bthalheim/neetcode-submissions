class Solution {
public:
    int trap(vector<int>& height) {

        int sz = height.size();

        if (sz == 0) {
            return 0;
        }

        vector<int> leftMax(sz); 
        vector<int> rightMax(sz); 
        int res = 0;

        leftMax[0] = height[0];
        for(int i = 1; i < sz; i++) {
            leftMax[i] = std::max(leftMax[i - 1], height[i]);  
        } 

        rightMax[sz - 1] = height[sz - 1];  
        for(int j = sz - 2; j >= 0; j--) {
            rightMax[j] = std::max(rightMax[j + 1], height[j]);
        }

        for(int k = 0; k < sz; k++) {
            res += std::min(leftMax[k], rightMax[k]) - height[k]; 
        }

        return res;

    }
};
