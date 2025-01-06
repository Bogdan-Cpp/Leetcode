#include <iostream>
#include <vector>
#include <cmath>

struct ListNode{
   int val;
   ListNode *next;
};

int getDecimalValue(ListNode *&head);
void addNode(ListNode *&head, int data);

int main(){
    ListNode *head = nullptr;
    
    addNode(head, 1);
    addNode(head, 0);
    addNode(head, 1);
    
    int var = getDecimalValue(head);
    std::cout << var << "\n";
    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *node = new ListNode();

    node->val = data;
    node->next = head;
    head = node;
}

int getDecimalValue(ListNode *&head) {
    std::vector<int> lista;
    std::vector<int> lista2;
    ListNode *curr = head;
    int binary = 0;

    while(curr != nullptr){
        lista.push_back(curr->val);
        curr = curr->next;
    }
    int rez = 0;
    int exponent = 0;

    for(int i = lista.size() - 1; i >= 0; i--){
        rez = lista[i] * pow(2, exponent);
        lista2.push_back(rez);
        rez = 0;
        exponent++;
    }

    for(int j = 0; j < lista2.size(); j++){
        binary += lista2[j];
    }
    return binary;   
}