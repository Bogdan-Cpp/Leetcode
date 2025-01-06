#include <iostream>

int mySqrt(int x);

int main(){
  int var = mySqrt(2147395600);
  std::cout << var << '\n';

  system("pause");
  return 0;
}

int mySqrt(int x) {
  if(x == 1 || x == 2){return 1;}

  long long patrat = 0;
  for(long long i = 2; i < x; i++){
    patrat = i * i;

    if(patrat > x){
      return i - 1;
    }
  }
  return 0;
}