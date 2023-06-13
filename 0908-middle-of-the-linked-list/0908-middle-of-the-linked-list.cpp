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
    ListNode* middleNode(ListNode* head) {
        if(NULL == head->next)return head;

        ListNode* doub = head->next;
        while(NULL != doub){
            head = head->next;
            if(NULL == doub->next)return head;
            doub = doub->next->next;
        }
        return head;
    }
};