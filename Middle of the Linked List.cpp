#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
};

void addNode(ListNode *&head, int data);
ListNode *middleNode(ListNode *&head);
void deleteNode(ListNode *&head);

int main(){
    ListNode *head = nullptr;
    int count = 0;
    
    addNode(head, 5);
    addNode(head, 4);
    addNode(head, 3);
    addNode(head, 2);
    addNode(head, 1);

    ListNode *var = middleNode(head);
    
    while(var != nullptr){
        std::cout << var->val << " ";
        var = var->next;
    }

    deleteNode(head);

    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *node = new ListNode();

    node->val = data;
    node->next = head;
    head = node;
}

ListNode *middleNode(ListNode *&head) {
    ListNode *slow = head;
    ListNode *fast = head;
    int count2 = 0;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void deleteNode(ListNode *&head){
    ListNode *curr = head;

    while(curr != nullptr){
        ListNode *temp = curr;
        curr = curr->next;
        delete temp;
    }
}