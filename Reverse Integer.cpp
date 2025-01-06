#include <iostream>
#include <limits>

int reverse(int x);

int main(){
    long long var = reverse(-21474834143);
    std::cout << var << '\n';

    system("pause");
    return 0;
}

int reverse(int x) {
    int rez = 0;
    
    if(x == 0){
        return 0;
    }
   
    while(x != 0){
        int digit = x % 10;
        x /= 10;

       if(rez > (std::numeric_limits<int>::max() / 10) || rez < (std::numeric_limits<int>::min() / 10)){
         return 0;
       }
       rez = rez * 10 + digit;
    }
    return rez;
}