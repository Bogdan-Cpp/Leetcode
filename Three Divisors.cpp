#include <iostream>
#include <cmath>

bool isThree(int n);

int main(){
    bool isTrue = isThree(4);
    std::cout << isTrue << "\n";

    system("pause");
    return 0;
}

bool isThree(int n) {
    if(n == 1){return false;}
    bool isPrim = false;
    int sq = static_cast<int>(sqrt(n));

    if(sq * sq != n){return false;}

    if(sq == 2){return true;}

    for(int j = 2; j < sq; j++){
        if(sq % j == 0){return false;}
    }
    isPrim = true;
    return isPrim;
}