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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int carry=0;
        
        ListNode*dummynode=new ListNode(-1);
        ListNode*temp=dummynode;
        
        while(l1!=NULL || l2!=NULL || carry!=0){
    
            int x,y;
            
             if(l1!=NULL){
                 x= l1->val;
                 l1 = l1->next;
             }
            
            else  x=0;
     
             if(l2!=NULL){
                 y= l2->val;
                 l2 = l2->next;
             }
            
            else  y=0;
               
            sum=x+y+carry;
            carry=sum/10;
            
            ListNode*node=new ListNode(sum % 10);
            temp->next=node;
            temp=temp->next;
             
        }
         temp->next=nullptr;
         return dummynode->next; 
        
        
    }
};