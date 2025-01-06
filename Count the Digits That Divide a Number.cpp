#include <iostream>

int countDigits(int num);

int main(){
    int var = countDigits(121);
    std::cout << var << '\n';
    
    system("pause");
    return 0;
}

int countDigits(int num) {
    int org = num;
    int count = 0;

    while(org > 0){
        int buc = org % 10;
        if(num % buc == 0){count += 1;}
        org /= 10;
    }
    return count;
}