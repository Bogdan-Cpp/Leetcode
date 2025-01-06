#include <iostream>
#include <vector>
#include <algorithm>

double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2);

int main(){
    double rez = findMedianSortedArrays({1, 2}, {3, 4});
    std::cout << rez;
    system("pause");
    return 0;
}

double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2){
    for(int elem : nums2){
        nums1.push_back(elem);
    }
    std::sort(nums1.begin(), nums1.end());

    int x = nums1.size();

    if(x % 2 != 0){
        return nums1[x / 2];
    }
    
    double rez = 0;
    double i = nums1[nums1.size() / 2];
    double j = nums1[(nums1.size() / 2) - 1];

    rez = (i + j) / 2;
    return rez;
}