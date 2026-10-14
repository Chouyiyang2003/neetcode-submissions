class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return head;
        }

        ListNode* curr = head;
        int num = 0;

        // 計算 Linked List 長度
        while(curr != nullptr){
            num++;
            curr = curr->next;
        }

        // 如果要刪除第一個節點
        if(n == num){
            return head->next;
        }

        // 重新回到第一個節點
        curr = head;

        // 找到要刪除節點的前一個節點
        for(int i = 0; i < num - n - 1; i++){
            curr = curr->next;
        }

        // 跳過要刪除的節點
        curr->next = curr->next->next;

        return head;
    }
};