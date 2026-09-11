class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> lookup;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {

            if(lookup.contains(target - nums[i])) {
                    result.push_back(i);
                    result.push_back(lookup[target - nums[i]]); 
                    sort(result.begin(), result.end()); 
                    return result; 
            
            }

            lookup[nums[i]] = i;

        }

    }
};
