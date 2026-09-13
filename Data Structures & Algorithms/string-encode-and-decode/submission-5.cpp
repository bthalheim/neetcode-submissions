
class Solution {
public:

    // <int>#Word
    string encode(vector<string>& strs) {
        std:stringstream ss; 
        for(string str: strs) {
            ss << str.size() << "#" << str; 
        }
        return ss.str();
    }

    vector<string> decode(string s) {

        cout << s << endl;

        vector<string> ret;
        int cursor = 0; 

        size_t sz = s.length();
        string temp; 
        string temp2;


        size_t sep_pos;

        string word; 
        int    word_length; 

        while(cursor < sz) {
            sep_pos = s.find('#', cursor);

            temp = s.substr(cursor, sep_pos-cursor);

            word_length = stoi(temp); 
            cursor += temp.size() +word_length+1;

            word = s.substr(sep_pos+1, word_length);

            ret.push_back(word);

        }

        return ret;

    }

};
