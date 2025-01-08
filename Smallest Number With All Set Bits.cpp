#include <iostream>
#include <cmath>

int smallestNumber(int n);

int main(){
    int var = smallestNumber(5);
    std::cout << var << "\n";
    
    return 0;
}

int smallestNumber(int n) {
    int prev = 0;
    int curr = 0;
    int count = 0;

    while(true){
       curr = prev + pow(2, count);
       if(curr >= n){
           return curr;
       }
       prev = curr;
       count += 1;
    }
    return 0;
}