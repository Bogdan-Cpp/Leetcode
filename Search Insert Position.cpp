#include <iostream>
#include <algorithm>
#include <vector>

int searchInsert(std::vector<int> nums, int target);

int main(){
    int rez = searchInsert({1,3,5,6}, 2);
    std::cout << rez;
    system("pause");
    return 0;
}

int searchInsert(std::vector<int> nums, int target){
    for(int i = 0; i < nums.size(); i++){
        if(target == nums[i]){
            return i;
        }
    }
    
    nums.push_back(target);
    std::sort(nums.begin(), nums.end());

    for(int j = 0; j < nums.size(); j++){
        if(target == nums[j]){
            return j;
        }
    }
    return 0;
}