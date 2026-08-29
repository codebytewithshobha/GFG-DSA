/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        if(head == NULL && head->next == NULL) return true;
    
        
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* prev = NULL;
                Node* curr = slow;

                while (curr != NULL) {
                    Node* next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }

                // Compare both halves
                Node* first = head;
                Node* second = prev;

                while (second != NULL) {
                    if (first->data != second->data)
                        return false;

                    first = first->next;
                    second = second->next;
                }

                return true;
            }
        };