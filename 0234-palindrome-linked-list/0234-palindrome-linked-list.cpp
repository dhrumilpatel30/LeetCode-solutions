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
    bool isPalindrome(ListNode* head) {
        if(NULL == head->next)return true; 
        ListNode* curr = head;
        ListNode* doubl = head;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        while(NULL != doubl){
            temp = prev;
            prev = curr;
            curr = curr->next;
            if(NULL == doubl->next){
                prev = temp;
                break;
            }
            doubl = doubl->next->next;
            prev->next = temp;
        }

        while(NULL != curr){
            if(curr->val != prev->val)return false;

            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};