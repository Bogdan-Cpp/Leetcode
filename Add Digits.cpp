#include <iostream>

int addDigits(int num);
        
int main(){
    int rez = addDigits(38);
    std::cout << rez;
    system("pause");
    return 0;
}

int addDigits(int num){
   int tot = 0;
   
   while(num > 9){
      while(num > 0){
        tot += num % 10;
        num /= 10;
      }
      num = tot;
      tot = 0;
   }
   return num;
}