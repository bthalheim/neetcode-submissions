class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> colate; 
        vector<vector<string>> ret;
         

        int n = strs.size(); 

        for(int i = 0; i < n; i++) {
            
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());

            if(colate.find(sorted) != colate.end()) {
                colate[sorted].push_back(strs[i]);
                continue;
            }

            colate[sorted] = {strs[i]};

        }

        for (const auto& [_, value] : colate)
            ret.push_back(value);


        return ret;
        

    }
};
