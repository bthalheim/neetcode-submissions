class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) { return false; }

        std::unordered_map<char, int> inv_s;
        std::unordered_map<char, int> inv_t;


        for(int i = 0; i < s.size(); i++) {
            inv_s[s[i]]++;
            inv_t[t[i]]++;
        }

        return inv_s == inv_t;

    }
};
