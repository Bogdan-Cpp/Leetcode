#include <iostream>

struct ListNode{
   int val;
   ListNode *next;
};

void addNode(ListNode *&head, int data);
ListNode* reverseList(ListNode *&head);
void deleteList(ListNode *head);

int main(){
    ListNode *head = nullptr;
    addNode(head, 10);
    addNode(head, 20);
    addNode(head, 30);
    
    ListNode *reversed = reverseList(head);
    ListNode *curr = reversed;

    while(curr != nullptr){
       std::cout << curr->val << " ";
       curr = curr->next; 
    }
    deleteList(head);
    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *node = new ListNode();
    node->val = data;
    node->next = head;
    head = node;
}

ListNode* reverseList(ListNode *&head){
    ListNode *curr = head;
    ListNode *next = nullptr;
    ListNode *prev = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

void deleteList(ListNode *head){
    ListNode *curr = head;
    while(curr != nullptr){
        ListNode *temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}

