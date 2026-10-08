class Solution {
public:
    priority_queue<int> sw;
    int lastStoneWeight(vector<int>& stones) {
        for(int i = 0 ; i < stones.size() ; i++){
            sw.push(stones[i]);
        }
        while(!sw.empty()){
            if(sw.size()==1){
                return sw.top();
            }
            int s1 = sw.top();
            sw.pop();
            int s2 = sw.top();
            sw.pop();
            sw.push(s1-s2);
        }
        return 0;
    }
};
