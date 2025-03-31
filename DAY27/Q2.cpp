//Delete in a Doubly Linked List
//https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-node-in-doubly-linked-list


class Solution {
    public:
      // Function to delete a node at given position.
      Node* deleteNode(Node* head, int x) {
          if (head==NULL || head->next == NULL) return NULL;
          Node* temp = head;
          int cnt = 0;
          while(temp!=NULL) 
          {
              cnt++;
              if (cnt==x) break;
              temp = temp->next;
          }
          
          Node* back = temp->prev;
          Node* front = temp->next;
          if (back==NULL)
          {
              head = head->next;
              head->prev = nullptr;
              temp->next = nullptr;
              free(temp);
              return head;
          }
          
          if (front==NULL)
          {
              back->next = nullptr;
              temp->prev = nullptr;
              free(temp);
              return head;
          }
          
          back->next = front;
          front->prev = back;
          temp->next = temp->prev = nullptr;
          free(temp);
          return head;
      }
  };