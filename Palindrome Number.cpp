#include <iostream>
#include <vector>

bool isPalindrome(int x){
   std::vector<int> lista;
   int num = 0;
   int original = x;

   while(x > 0){
      lista.push_back(x % 10);
      x /= 10;
   }

   for(int i = 0; i < lista.size(); i++){
       num = (num * 10) + lista[i];
   }
   return original == num;
}

int main(){
    std::cout << isPalindrome(121);
    std::cout << isPalindrome(-121);
    std::cout << isPalindrome(1234567899);
    system("pause");
    return 0;
}