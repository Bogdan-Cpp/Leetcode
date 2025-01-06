#include <iostream>
#include <algorithm>

std::string finalString(std::string s);

int main(){
    std::string var = finalString("poiinter");
    std::cout << var << '\n';

    system("pause");
    return 0;
}

std::string finalString(std::string s) {
    std::string word = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'i'){
           std::reverse(word.begin(), word.end());
        }
        else{
            word += s[i];
        }
    }
    return word;
}