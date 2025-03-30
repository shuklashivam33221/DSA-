// INSERT NEW NODE AT END

class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          Node* temp = head;
          while(temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next->data = x;
          temp->next->next = NULL;
          return head;
      }
  };