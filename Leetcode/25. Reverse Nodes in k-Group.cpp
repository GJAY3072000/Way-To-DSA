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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(!cursor){
                return head;
            }
            cursor = cursor->next;
        }
       ListNode* fo=NULL;
       ListNode* cur=head;
       ListNode* pre=NULL;
        int c=0;
        while(cur && c<k){
            fo=cur->next;
            cur->next=pre;
            pre=cur;
            cur=fo;
            c++;
        }
        if(fo){
            head->next=reverseKGroup(fo,k);
        }
        return pre;
    }
};