#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getSneakyNumbers(std::vector<int> nums);

int main(){
    std::vector<int> lista = getSneakyNumbers({0,1,1,0});
    for(int i = 0; i < lista.size(); i++){
        std::cout << lista[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> getSneakyNumbers(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<int> lista;
    int count = 0;
    
    while(count + 1 < nums.size()){
        int prev = nums[count + 1];
        int curr = nums[count];
        if(curr == prev){
            lista.push_back(curr);
            count++;
        }
        count++;
    }
    return lista;
}