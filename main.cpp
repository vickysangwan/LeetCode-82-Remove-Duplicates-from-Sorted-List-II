/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr)
        {
            bool foundDuplicate=false;
            while(curr->next!=NULL && curr->val==curr->next->val)
            {
                foundDuplicate=true;
                curr=curr->next;
            }
            if(foundDuplicate)
            {
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=prev->next;
        }
        return dummy->next;
    }
};
