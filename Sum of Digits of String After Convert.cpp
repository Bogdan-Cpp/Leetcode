#include <iostream>
#include <vector>

int getLucky(std::string s, int k);

int main(){
    int var = getLucky("hvmhoasabaymnmsd", 1);
    std::cout << var << '\n';

    system("pause");
    return 0;
}

int getLucky(std::string s, int k) {
    long long tot = 0;
    int count = 0;
    std::vector<char> alfabet = {'a', 'b', 'c', 'd', 'e',
                                        'f', 'g', 'h', 'i', 'j',
                                        'k', 'l', 'm', 'n', 'o',
                                        'p', 'q', 'r', 's', 't',
                                        'u', 'v', 'w', 'x', 'y', 'z'};
    
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < alfabet.size(); j++){
            if(s[i] == alfabet[j]){
                count = j + 1;
                break;
            }
        }
        if(count >= 10){
            while(count > 0){
                tot += count % 10;
                count /= 10;
            }
        }
        else{tot += count;}
    }

    k = k - 1;
    if(k == 0){return tot;}

    long long rez = 0;
    while (k > 0){
        rez = 0;
        while(tot > 0){
            rez += tot % 10;
            tot /= 10;
        }
        tot = rez;
        k = k - 1;
    }
    return rez;
}