class Solution {
public:
    priority_queue<int> pq;
    int lastStoneWeight(vector<int>& stones) {
        for(auto stone:stones){
            pq.push(stone);
        }
        while(pq.size()>1){
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
            if(s1-s2 != 0){
                pq.push(s1-s2);
            }
        }
        if(pq.size() == 1){
            return pq.top();
        }
        return 0;
    }
};
