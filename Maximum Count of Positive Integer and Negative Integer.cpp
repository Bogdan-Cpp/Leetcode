#include <iostream>
#include <vector>
#include <cmath>

int maximumCount(std::vector<int> nums);

int main(){
    int var = maximumCount({-1563,-236,-114,-55,427,447,687,752,1021,1636});
    std::cout << var << '\n';

    system("pause");
    return 0;
}

int maximumCount(std::vector<int> nums) {
    int poz = 0;
    int neg = 0;

    for(int i = 0; i < nums.size(); i++){
       if(nums[i] < 0){
           neg += 1;
       }
       else if(nums[i] > 0){
           poz += 1;
       }
    }

    if(neg >= poz){
        return neg;
    }
    else{
        return poz;
    }
}