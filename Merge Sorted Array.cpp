#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> merge(std::vector<int> nums1, int m, std::vector<int> nums2, int n);

int main(){
    std::vector<int> lista = merge({1,2,3,0,0,0}, 3, {2,5,6}, 3);
    for(int i = 0; i < lista.size(); i++){
        std::cout << lista[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> merge(std::vector<int> nums1, int m, std::vector<int> nums2, int n) {
    int count = 0;

    for(int i = 0; i < nums1.size(); i++){
        if(nums1[i] == 0 && count < nums2.size()){
            nums1[i] = nums2[count];
            count++;
        }
    }
    std::sort(nums1.begin(), nums1.end());
    return nums1;
}