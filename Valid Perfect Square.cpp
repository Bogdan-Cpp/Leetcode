#include <iostream>
#include <cmath>

bool isPerfectSquare(int num);

int main(){
    bool var = isPerfectSquare(4);
    std::cout << var << '\n';

    system("pause");
    return 0;
}

bool isPerfectSquare(int num) {
    for(int i = sqrt(num) - 1; i < sqrt(num) + 1; i++){
        int tot = i * i;
        if(tot == num){
            return true;
        }
    }
    return false;
}