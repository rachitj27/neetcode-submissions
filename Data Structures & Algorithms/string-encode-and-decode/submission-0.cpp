class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string str : strs) {
            result += to_string(str.length()) + "#" + str;
            
        }
        return result;
    }

    vector<string> decode(string s) {
        
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            int hashPos = s.find('#', i);
            string lenStr = s.substr(i, hashPos - i);
            int len = stoi(lenStr);
            string word = s.substr(hashPos + 1, len);
            result.push_back(word);
            i = hashPos + 1 + len;
        }
        return result;
    }
    

};
