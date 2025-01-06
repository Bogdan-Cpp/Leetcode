#include <iostream>
#include <vector>
#include <algorithm>

int singleNumber(std::vector<int> nums);

int main(){
    int var = singleNumber({4,1,2,1,2});
    std::cout << var << " ";
    system("pause");
    return 0;
}

int singleNumber(std::vector<int> nums) {
  int count = 0;
  std::sort(nums.begin(), nums.end());  
  int prev = 0;
  int curr = 0;

  while(count < nums.size()){
    curr = nums[count + 1];
    prev = nums[count];

    if(curr != prev){return prev;}
    else{count += 2;}
  }
  return nums[nums.size() - 1];
}