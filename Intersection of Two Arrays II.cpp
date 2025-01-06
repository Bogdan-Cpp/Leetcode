#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> intersect(std::vector<int> nums1, std::vector<int> nums2);

int main(){
    std::vector<int> var = intersect({1,2, 2, 1}, {1, 1});

    for(int i = 0; i < var.size(); i++){
      std::cout << var[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> intersect(std::vector<int> nums1, std::vector<int> nums2) {
    std::vector<int> lista;
    int termen = 0;
    
    for(int i = 0; i < nums1.size(); i++){
     termen = nums1[i];
      
      for(int j = 0; j < nums2.size(); j++){
        if(termen == nums2[j]){
          lista.push_back(termen);
          nums2.erase(nums2.begin() + j);
          break;
        }
      }
    }
    return lista;
}