#include <iostream>
#include <vector>

int countNegatives(std::vector<std::vector<int>> grid);

int main(){
    int var = countNegatives({{4,3,2,-1}, {3,2,1,-1}, {1,1,-1,-2}});
    std::cout << var << '\n';
    system("pause");
    return 0;
}

int countNegatives(std::vector<std::vector<int>> grid) {
   int count = 0;

   for(int i = 0; i < grid.size(); i++){
       for(int j = 0; j < grid[i].size(); j++){
           if(grid[i][j] < 0){
                count += 1;
            }
        }
    }
    return count;
}
