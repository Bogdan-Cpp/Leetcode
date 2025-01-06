#include <iostream>
#include <vector>
#include <algorithm>

std::string triangleType(std::vector<int> nums);

int main(){
    std::string var = triangleType({2, 6, 5});
    std::cout << var << " ";
    system("pause");
    return 0;
}
std::string triangleType(std::vector<int> nums) {
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];
    if(a == b && a + b > c && a == c && a + c > b && c == b && c + b > a){return "equilateral";}
    if(a != b && a + b > c && a != c && a + c > b && b != c && b + c > a) {return "scalene";}
    if(a + b > c && a + c > b && b + c > a) {return "isosceles";}
    return "none";
}