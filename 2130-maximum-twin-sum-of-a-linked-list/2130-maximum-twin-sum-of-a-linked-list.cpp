/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    stack<int> stck;
    int pairSum(ListNode* head) {
        ListNode* cur = head;
        while(NULL != cur){
            stck.push(head->val);
            cur = cur->next->next;
            head = head->next;
        }
        int ans = 0;
        while(!stck.empty()){
            ans = max(ans,stck.top()+head->val);
            head = head->next;
            stck.pop();
        }
        return ans;
    }
};