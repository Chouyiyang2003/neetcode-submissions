class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto str:strs){
            ans += to_string(str.size()) + '#' + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> ans;
        while(i < s.size()){
            string len = "";
            while(s[i] != '#'){
                len += s[i];
                i++;
            }
            i++;
            string str = "";
            for(int k = 0 ; k < stoi(len) ; k++){
                str += s[i];
                i++;
            }
            ans.push_back(str);
        }
        return ans;
    }
};
