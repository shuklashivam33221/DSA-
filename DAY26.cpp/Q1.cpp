//Doubly linked list Insertion at given position
//https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list


class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          if (head == NULL) return NULL;
          Node* temp = head;
          Node* newNode = new Node(data);
          int cnt = 0;
          while(temp!=NULL)
          {
              cnt++;
              if (cnt == pos+1)
              {
                  break;
              }
              temp = temp->next;
          }
          Node* back = temp->prev;
          Node* front = temp->next;
          if (back==NULL)
          {
              newNode->next = head;
              head->prev = newNode;
              return newNode;
          }
          
          if (front==NULL)
          {
              temp->next = newNode;
              newNode->prev = temp;
              return head;
          }
          
          
          newNode->next = front;
          newNode->prev = temp;
          temp->next = newNode;
          front->prev = newNode;
          return head;
      }
  };