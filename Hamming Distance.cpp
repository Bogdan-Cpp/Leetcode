#include <iostream>
#include <algorithm>
#include <string>
#include <algorithm>

int hammingDistance(int x, int y);

int main(){
    int var = hammingDistance(3, 1);
    std::cout << var << "\n";

    system("pause");
    return 0;
}

int hammingDistance(int x, int y) {
    std::string num1 = "";
    std::string num2 = "";
    int count = 0;

    while(x > 0){
        if(x % 2 == 0){
            num1 += '0';
        }
        else{num1 += '1';}
        x /= 2;
    }

    while(y > 0){
        if(y % 2 == 0){
            num2 += '0';
        }
        else{num2 += '1';}
        y /= 2;
    }
   
    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());

    if(num1.size() > num2.size()){
        num2.insert(num2.begin(), num1.size() - num2.size(), '0');
    }
    if(num1.size() < num2.size()){
        num1.insert(num1.begin(), num2.size() - num1.size(), '0');
    }

    for(int i = 0; i < num2.size(); i++){
        if(num1[i] != num2[i]){
            count += 1;
        }
    }
    return count;
}