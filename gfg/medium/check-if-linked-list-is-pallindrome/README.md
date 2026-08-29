# Palindrome Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the  **head**  of a singly linked list of positive integers. You have to check if the given linked list is  **palindrome** or not.

 **Examples:** 

```
Input:
   
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1, which is a palindrome.

```

```
Input:
   
Output: false
Explanation: The given linked list is 10 -> 20 -> 30 -> 40 -> 50, which is not a palindrome.

```

 **Constraints:** 
1 ≤ number of nodes ≤ 105
0 ≤ node->data ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T06:39:40.482Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1)