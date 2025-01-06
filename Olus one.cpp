#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> plusOne(std::vector<int> digits);

int main(){
    std::vector<int> rez = plusOne({1, 2, 3});
    std::vector<int> rez1 = plusOne({4,3,2,1});
    std::vector<int> rez2 = plusOne({9, 8, 9});

    for(int elem : rez2){
        std::cout << elem << " ";
    }
   
    system("pause");
    return 0;
}

std::vector<int> plusOne(std::vector<int> digits){
    for(int i = digits.size() - 1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}