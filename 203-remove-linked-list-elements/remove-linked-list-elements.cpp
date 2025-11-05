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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        else{
            ListNode *temp=new ListNode(0);
            ListNode *tail=temp;
            while(head!=NULL){
                if(head->val!=val){
                    tail->next=head;
                    head=head->next;
                    tail=tail->next;
                    tail->next=NULL;
                }
                else{
                    head=head->next;
                }
            }
            tail=temp;
            temp=temp->next;
            delete(tail);
              return temp;
        }
        // return temp;
        
    }
};