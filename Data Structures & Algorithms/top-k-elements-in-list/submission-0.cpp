using pii = std::pair<int,int>;


class Solution {


struct Compare {
    bool operator()(const pii& a, const pii& b) {
        return a.second < b.second;
    }
};



public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::priority_queue<pii, 
                            vector<pii>,
                            Compare> pq;


        unordered_map<int, int> table = {};
        vector<int> ret;

        int sz = nums.size(); 

        for (int i = 0; i < sz; i++) {
            table[nums[i]]++; 
        }

        for(const auto& pair: table) {
            pq.push(pair);
        }


        for (int j = 0; j < k; j++) {
            ret.push_back(pq.top().first);
            pq.pop();
        } 

        return ret;

    }
};
