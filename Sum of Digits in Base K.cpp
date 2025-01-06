#include <iostream>

int sumBase(int n, int k);

int main(){
    int var = sumBase(34, 6);
    std::cout << var << " ";
    system("pause");
    return 0;
}

int sumBase(int n, int k) {
    int tot = 0;

    while(n > 0){
        tot = tot + (n % k);
        n /= k;
    }
    return tot;
}