#include <iostream>
#include <unordered_set>

bool isHappy(int n);

int main(){
    bool var = isHappy(19);
    std::cout << var << '\n';

    system("pause");
    return 0;
}

bool isHappy(int n){
    std::unordered_set<int> lista;

    while(n != 1 && lista.find(n) == lista.end()){
        lista.insert(n);
        int tot = 0;

        while(n > 0){
            tot += (n % 10) * (n % 10);
            n /= 10;
        }
        n = tot;
    }
    return n == 1;
}