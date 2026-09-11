class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        
        std::unordered_map<int, int> lookup;

        for(int i=0; i<nums.size(); i++) {
             
            if(lookup.contains(nums[i])){
                return true; 
            } 

            lookup[nums[i]] = 1;

        }

        return false;

    }


};