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
    ListNode* reverseList(ListNode* head) {
        vector<int>v1;
        ListNode *temp=head;
        while(temp!=NULL){
            v1.push_back(temp->val);
            temp=temp->next;
        }
        int n=v1.size()-1;
        temp=head;
        while(temp!=NULL)
        {
            temp->val=v1[n];
            n--;
            temp=temp->next;
        }
        return head;
    }
};