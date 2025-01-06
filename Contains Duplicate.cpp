#include <iostream>
#include <vector>
#include <algorithm>

bool containsDuplicate(std::vector<int> nums);

int main(){
    bool isValid = containsDuplicate({1,2,3,9});
    std::cout << isValid << '\n';

    system("pause");
    return 0;
}

bool containsDuplicate(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    int curr = 0;
    int prev = -1;
    for(int i = 0; i < nums.size(); i++){
       curr = nums[i];
       if(curr == prev){return true;}
       prev = curr;    
    }
    return false;
}