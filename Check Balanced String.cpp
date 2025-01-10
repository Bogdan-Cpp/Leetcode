#include <iostream>
#include <string>

bool isBalanced(std::string num);

int main(){
    bool isTrue = isBalanced("24123");
    std::cout << isTrue << '\n';

    system("pause");
    return 0;
}

bool isBalanced(std::string num) {
    int count1 = 0;
    int count2 = 1;
    int tot1 = 0;
    int tot2 = 0;

    while(count2 < num.length() || count1 < num.length()){
        if(count1 < num.length()){
            tot2 += num[count1] - '0';
            count1 += 2;
        }
        if(count2 < num.length()){
            tot1 += num[count2] - '0';
            count2 += 2;
        }
    }
    return tot1 == tot2;
}