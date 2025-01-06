#include <iostream>
#include <vector>

std::vector<int> selfDividingNumbers(int left, int right);

int main(){
    std::vector<int> var = selfDividingNumbers(1, 22);
    for(int i = 0; i < var.size(); i++){
        std::cout << var[i] << "\n";  
    }
    system("pause");
    return 0;
}

std::vector<int> selfDividingNumbers(int left, int right) {
    std::vector<int> lista;

    for(int i = left; i <= right; i++){
        bool isNum = true;
        int curr = i;
        
        while(curr > 0){
           int tot = curr % 10;

           if(tot == 0 || i % tot != 0){
              isNum = false;
              break;
           }
           curr /= 10;
        }
        if(isNum){lista.push_back(i);}
    }
    return lista;
}