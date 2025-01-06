#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

void reverseString(std::vector<char> s);

int main(){
    reverseString({'h','e','l','l','o'});
    system("pause");
    return 0;
}

void reverseString(std::vector<char> s) {
    std::stack<int> lista;
    int count = 0;

    while(s.size() != 0){
       lista.push(s[count]);
       s.erase(s.begin() + count);
    }

    while(!lista.empty()){
        s.push_back(lista.top());
        lista.pop();
    }

    for(char x : s){
        std::cout << x << " ";
    }
}