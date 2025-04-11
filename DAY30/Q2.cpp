// 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* temp = head;
            int count = 0;
            int cnt = 0;
            if(head == NULL || head->next == NULL)
            {
                return NULL;
            }
            while(temp!=NULL)
            {
                count++;
                temp = temp->next;
            }
            ListNode* temp1 = head;
            if (count-n==0)
            {
                head = head->next;
                delete temp1;
                return head;
            }
            while(temp1!=NULL)
            {
                cnt++;
                if (cnt == count-n)
                {
                    ListNode* front = temp1->next;
                    temp1->next = front->next;
                    delete front;
                }
                temp1 = temp1->next;
            }
            return head;
        }
    };