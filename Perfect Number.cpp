#include <iostream>

bool checkPerfectNumber(int num);

int main(){
    bool var = checkPerfectNumber(28);
    std::cout << var << '\n';
    system("pause");
    return 0;
}

bool checkPerfectNumber(int num) {
    long long tot = 0;

    for(long long i = 1; i < num; i++){
        if(num % i == 0){
            tot += i;
        }
    }
    return tot == num;
}