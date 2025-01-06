#include <iostream>
#include <vector>
#include <algorithm>

void moveZeroes(std::vector<int> nums);

int main(){
    std::vector<int> nums;
    moveZeroes({0, 0, 1});
    
    system("pause");
    return 0;
}

void moveZeroes(std::vector<int> nums){
    int temp = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size() - i - 1; j++){
            if(nums[j] == 0){
               temp = nums[j];
               nums[j] = nums[j + 1];
               nums[j + 1] = temp;
            }
        }
    }
    for (int elem : nums) {
        std::cout << elem << " ";
    }
}