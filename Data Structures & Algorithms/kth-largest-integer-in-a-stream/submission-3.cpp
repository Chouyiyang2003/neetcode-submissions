class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto num:nums){
            if(pq.size()==k && pq.top()<num){
                pq.pop();
            }
            pq.push(num);
        }
    }
    
    int add(int val) {
        
        if(pq.size()==k && pq.top()<val){
                pq.pop();
            }
            pq.push(val);
            return pq.top();
    }
};
