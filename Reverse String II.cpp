#include <iostream>

std::string reverseStr(std::string s, int k);

int main(){
    std::string var = reverseStr("abcdefg", 2);
    std::cout << var << " ";

    system("pause");
    return 0;
}

std::string reverseStr(std::string s, int k) {
    std::string word = "";
    int ka = k;
    k = 0;

    while(2 * ka < s.length()){
        for(int i = ka - 1; i >= k; i--){
            word += s[i];
        }
        ka *= 2;
        k = ka - 1;
        ka = ka + 1;
    }
    return word;
}   
