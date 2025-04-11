// 148. Sort List
//https://leetcode.com/problems/sort-list/
class Solution {
    public:
        ListNode* sortList(ListNode* head) {
            ListNode* temp = head;
            vector<int> vec;
            while(temp!=NULL)
            {
               vec.push_back(temp->val);
               temp = temp->next; 
            }
            sort(vec.begin(),vec.end());
            ListNode* temp1 = head;
            int i = 0;
            while(temp1!=NULL)
            {
                temp1->val = vec[i];
                temp1 = temp1->next;
                i++;
            }
            return head;
        }
    };