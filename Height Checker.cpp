#include <iostream>
#include <vector>
#include <algorithm>

int heightChecker(std::vector<int> heights);

int main(){
  int var = heightChecker({1, 1, 4, 2, 1, 3});
  std::cout << var << '\n';
  system("pause");
  return 0;
}

int heightChecker(std::vector<int> heights){
  std::vector<int> lista;
  int count = 0;
  int index = 0;

  for(int h : heights){
    lista.push_back(h);
  }
  
  std::sort(heights.begin(), heights.end());

  while(index < lista.size()){
    if(lista[index] != heights[index]){
      count += 1;
    }
    index++;
  }

  return count;
}