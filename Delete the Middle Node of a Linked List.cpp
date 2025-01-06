#include <iostream>

struct ListNode{
   int val;
   ListNode *next;
};

ListNode* deleteMiddle(ListNode *&head);
void addNode(ListNode *&head, int data);
void deleteNode(ListNode *&head);

int main(){
    ListNode *head = nullptr;

    addNode(head, 7);
    addNode(head, 2);
    addNode(head, 1);
    addNode(head, 7);
    addNode(head, 4);
    addNode(head, 3);
    addNode(head, 1);

    ListNode *var = deleteMiddle(head);

    while(var != nullptr){
        std::cout << var->val << " ";
        var = var->next;
    }
    deleteNode(head);
    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *curr = new ListNode();

    curr->val = data;
    curr->next = head;
    head = curr;
}

ListNode* deleteMiddle(ListNode *&head) {
    if(!head || !head->next){return nullptr;}
    
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = nullptr;

    while(fast != nullptr && fast->next != nullptr){
        ListNode *temp1 = slow;
        ListNode *temp2 = fast;
        
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev != nullptr){
        prev->next = slow->next;
    }
    
    delete slow;
    return head;
}

void deleteNode(ListNode *&head){
    ListNode *curr = head;

    while(curr != nullptr){
        ListNode *temp = curr;
        curr = curr->next;
        delete temp;
    }
}