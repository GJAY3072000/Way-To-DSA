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
    void reorderList(ListNode* head) {
        ListNode *dummy = head;
        vector<ListNode*> list;
        while(dummy){
            list.push_back(dummy);
            dummy = dummy->next;
        }
        
        int l = 0,r = list.size()-1;
        
        while(l <= r){
            if(l == r || r-l == 1){
                list[r]->next = nullptr;
                break;
            }
            list[l]->next = list[r];
            list[r]->next = list[l+1];
            l++;
            r--;
        }        
    }
};