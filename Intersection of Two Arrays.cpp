#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2);

int main(){
    std::vector<int> var = intersection({1, 2, 2, 1}, {2, 2});

    for(int i = 0; i < var.size(); i++){
        std::cout << var[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2) {
    std::vector<int> lista;

    for(int i = 0; i < nums1.size(); i++){
        int target = nums1[i];
        for(int j = 0; j < nums2.size(); j++){
            if(target == nums2[j]){
                if(std::find(lista.begin(), lista.end(), target) == lista.end()){
                    lista.push_back(target);
                }
                break;
            }
        }
    }
    return lista;
}