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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* zero=head;
        ListNode* p=head->next;
        while(p!=NULL){
            if(p->val!=0){
                zero->val+=p->val;
            }
            else{
                if(p->next==NULL){
                    zero->next=NULL;
                }
                else{
                    zero->next=p;
                }
                zero=p;
            }
            p=p->next;
        }
        return head;
    }
};