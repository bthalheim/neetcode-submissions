#include <stack>

class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> lookup = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        string open = "({[";
        std::stack<char> stck;

        for(char c: s) {
            if(open.contains(c)) {
                stck.push(c);
                continue;
            } 

            if(stck.size() == 0) {
                return false;
            }

            if(lookup[c] == stck.top()) {
                stck.pop();
                continue; 
            } else {
                return false;
            }
        
        }

        if(stck.size() != 0) {
            return false;
        }

        return true;
    }
};
