//Reverse a Doubly Linked List
//https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list

class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          if (head==NULL || head->next ==NULL) return head;
          DLLNode* prev = NULL;
          DLLNode* current = head;
          while(current!=NULL)
          {
              prev = current->prev;
              current->prev = current->next;
              current->next = prev;
              
              current = current->prev;
          }
          return prev->prev;
      }
  };