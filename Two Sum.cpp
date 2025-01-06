#include <iostream>
#include <vector>

    std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}

int main() {

    std::vector<int> result1 = twoSum({2, 7, 11, 15}, 9);
    std::vector<int> result2 = twoSum({3, 2, 4}, 6);
    std::vector<int> result3 = twoSum({3, 3}, 6);

    std::cout << result1[0] << result1[1] << '\n';
    std::cout << result2[0] << result2[1] << '\n';
    std::cout << result3[0] << result3[1] << '\n';
    
    system("pause");
    return 0;
}