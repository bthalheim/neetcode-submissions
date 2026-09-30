class Solution {
public:
    int search(vector<int>& nums, int target) {

        size_t sz = nums.size();

        int l = 0;
        int r = sz-1;
        int cur = r / 2;  

        while(l <= r) {

            cur = l + (r-l) / 2;  

            if(nums[cur] == target) {
                return cur;
            }

            if(nums[cur] > target) {
                r = cur - 1;
            } else {
                l = cur + 1;
            } 
        }

        return -1;

    }
};
