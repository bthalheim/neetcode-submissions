

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        if(nums.empty()) {
            return {};
        }

        size_t sz = nums.size();
        
        vector<int> ret(sz);
        vector<int> lp(sz); 
        vector<int> rp(sz);

        // Lefts
        lp[0] = 1; 
        for(int i = 1; i < sz; i++) {
            lp[i] = lp[i-1] * nums[i-1];
        }

        // Rights
        rp[sz-1] = 1;
        for(int i = sz - 2; i >= 0; i--) {
            rp[i] = rp[i+1] * nums[i+1];
        }

        // Products 
        for(int i = 0; i < sz; i++) {
            ret[i] = lp[i] * rp[i];
        }

        return ret; 

    }
};
