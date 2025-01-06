#include <iostream>
#include <vector>

int search(std::vector<int> nums, int target);

int main(){
    std::cout << search({-1,0,3,5,9,12}, 9);
    std::cout << search({-1,0,3,5,9,12}, 2);

    system("pause");
    return 0;
}

int search(std::vector<int> nums, int target){
    int first = 0;
    int last = nums.size();
    int mid;

    while(first < last){
        mid = (first + last) / 2;
        if(target == nums[mid]){
            return mid;
        }
        if(target < nums[mid]){
           last = last - 1;
        }
        if(target > mid){
            first = first + 1;
        }
    }
    return -1;
}