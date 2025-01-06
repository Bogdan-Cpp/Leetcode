#include <iostream>

int countEven(int num);

int main(){
    int number = countEven(30);
    std::cout << number << '\n';

    system("pause");
    return 0;
}

int countEven(int num) {
    int count = 0;

    for(int i = 1; i <= num; i++){
        int number = i;
        int n = 0;
        while(number> 0){
           n += number % 10;
           number /= 10;
        }
        if(n % 2 == 0){count += 1;}
    }
    return count;
}