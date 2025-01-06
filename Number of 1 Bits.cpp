#include <iostream>
#include <cmath>

int hammingWeight(int n);

int main(){
    int var = hammingWeight(11);
    std::cout << var << "\n";

    system("pause");
    return 0;
}

int hammingWeight(int n) {
    int number = 0;
    
    while(n != 0){
        int curr = 0;
        int count = 0;

        long long power = 1;
        while(power <= n){
           curr = static_cast<int>(power);
           power *= 2;
        }
        n = n - curr;
        number += 1;
    }
    return number;
}