#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(std::vector<int> nums);

int main(){
    std::vector<int> lista = sortedSquares({-4,-1,0,3,10});
    for(int i = 0; i < lista.size(); i++){
        std::cout << lista[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> sortedSquares(std::vector<int> nums) {
    std::vector<int> lista;

    for(int i = 0; i < nums.size(); i++){
        lista.push_back(nums[i] * nums[i]);
    }
    std::sort(lista.begin(), lista.end());
    return lista;
}