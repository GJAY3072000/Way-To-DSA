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
    void insertionSort(vector<int> &a,int n){
        for(int i = 1;i<n;i++){
            int tem = a[i];
            int j = i-1;
            while(j>=0 && a[j]>tem){
                a[j+1] = a[j]; j--;
            }
            a[j+1] = tem;
        }
    }
    
    ListNode* insertionSortList(ListNode* head) {
        ListNode* t = head;
        vector<int> a;
        while(t != NULL){
            a.push_back(t->val); t = t->next;
        }
        insertionSort(a,a.size());
        t = head; int i =0;
        while(t != NULL){
            t->val = a[i++]; t = t->next;
        }
        return head;
    }
};