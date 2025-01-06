#include <iostream>
#include <stack>

bool isValid(std::string s);

int main(){
    bool isClosed = isValid("([]");
    std::cout << isClosed << '\n';

    system("pause");
    return 0;
}

bool isValid(std::string s) {
    std::stack<char> open;
    bool isTrue = false;

    if(s.length() == 1){return false;}

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            isTrue = false;
            open.push(s[i]);
        }
        else{
            if(open.empty()){return false;}
            else if(open.top() == '(' && s[i] != ')'){return false;}
            else if(open.top() == '[' && s[i] != ']'){return false;}
            else if(open.top() == '{' && s[i] != '}'){return false;}
            open.pop();
            isTrue = true;
        }
    }
    if(!open.empty()){return false;}
    return isTrue;
}