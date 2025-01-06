#include <iostream>
#include <vector>
#include <cmath>

int countTriples(int n);

int main(){
    int var = countTriples(10);
    std::cout << var << " ";

    system("pause");
    return 0;
}

int countTriples(int n){
    int remember = 0;

    for(int j = 1; j <= n; j++){
        for(int x = j; x <= n; x++){
            int tot = (j * j) + (x * x);
            int c = static_cast<int>(sqrt(tot));
           if(c * c == tot && c <= n){
              if(j == x){
                 remember += 1;
               }
               else{
                remember += 2;
               }
           }
        }
    }

    return remember;
}