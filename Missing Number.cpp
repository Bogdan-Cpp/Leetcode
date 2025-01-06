#include <iostream>
#include <vector>
#include <algorithm>

int missingNumber(std::vector<int> nums);

int main(){
    int var = missingNumber({0, 1, 2, 3});
    std::cout << var << '\n';
    system("pause");
    return 0;
}

int missingNumber(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());

    for(int i = 0; i < nums[nums.size() - 1]; i++){
        if(i != nums[i]){
            return i;
        }
    }
    
    return nums[nums.size() - 1] + 1;
}