class Solution {
public:

    string encode(vector<string>& strs) {
        string ans; 
        for(auto str:strs){
            ans += to_string(str.size());
            ans += '#';
            ans += str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        string ns;
        while(i < s.size()){
            string str = "";
            string ns = "";
            while(s[i] != '#'){
                ns += s[i];
                i++;
            }
            i++;
            for(int k = 0 ; k < stoi(ns) ; k++){
                str += s[i];
                i++;
            }
            ans.push_back(str);
        }
        return ans;
    }
};
