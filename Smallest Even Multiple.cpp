#include <iostream>

int smallestEvenMultiple(int n);

int main(){
    system("pause");
    return 0;
}

int smallestEvenMultiple(int n) {
    if(n % 2 == 0){
        return n;
    }
    return n * 2;
}