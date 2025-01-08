#include <iostream>
#include <vector>

int main(){
    std::vector<int> lista;
    int start = 10;
    int goal = 7;
    
    int st = 0;
    int gl = 0;

    while(start > 0){
        if(start % 2 == 0){
            st = (st * 10) + 0;
        }
        else{st = (st * 10) + 1;}
        start /= 2;
    }

    while(goal > 0){
        if(goal % 2 == 0){
            gl = (gl * 10) + 0;
        }
        else{gl = (gl * 10) + 1;}
        goal /= 2;
    }
    int xor1 = st ^ gl;

    while(xor1 > 0){
        lista.push_back(xor1 % 10);
        xor1 /= 10;
    }

    for(int i = 0; i < lista.size(); i++){
        std::cout << lista[i] << " ";
    }
    return 0;
}