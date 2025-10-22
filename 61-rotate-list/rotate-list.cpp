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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        ListNode *curr=head;
        if(head==NULL || head->next==NULL){
           return head;
        }
        else{
            while(curr!=NULL){
                count++;
                curr=curr->next;
            }
            k=k%count;
            if(k==0) return head;
            count=count-k;
            ListNode *temp=head, *prev=NULL;
            while(count!=0){
                prev=temp;
                temp=temp->next;
                count--;
            }
            prev->next=NULL;
            ListNode *tail=temp;
            while(tail->next!=NULL){
                tail=tail->next;
            }
            tail->next=head;
            head=temp;
            return head;
        }
    }
};