class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> us;
        for(auto num:nums){
            us[num]++;
        }
        vector<pair<int, int>> fq; 
        for(auto p:us){
            fq.push_back({p.second,p.first});
        }
        sort(fq.begin(), fq.end(), greater<pair<int, int>>());

        vector<int> ans;
        for(int i = 0 ; i < k ; i++){
            ans.push_back(fq[i].second);
        }
        return ans;
    }
};
