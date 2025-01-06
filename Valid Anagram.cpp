#include <iostream>
#include <algorithm>

bool isAnagram(std::string s, std::string t);

int main(){
    bool var = isAnagram("anagram", "tagaram");
    std::cout << var << "\n";

    system("pause");
    return 0;
}

bool isAnagram(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    
    return s == t;
}