#include <iostream>
#include <vector>

bool canAliceWin(std::vector<int> nums);

int main(){
    bool isWin = canAliceWin({1,2,3,4,10});
    std::cout << isWin << " ";
    system("pause");
    return 0;
}

bool canAliceWin(std::vector<int> nums) {
    long long d = 0;
    long long s = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] / 10 == 0){s += nums[i];}
        else{d += nums[i];}
    }

    return d > s || s > d;
}