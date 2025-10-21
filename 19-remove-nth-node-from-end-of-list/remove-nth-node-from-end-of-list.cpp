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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        int count=0;
        // int k=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        count=count-n;
        if(count==0){
            curr=head;
            head=head->next;
            delete curr;
            return head;
        }
        ListNode *temp=head, *prev=NULL;
        while(count!=0){
            prev=temp;
            temp=temp->next;
            count--;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};