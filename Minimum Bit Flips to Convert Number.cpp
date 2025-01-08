#include <iostream>
#include <algorithm>

int minBitFlips(int start, int goal);

int main(){
    int var = minBitFlips(99, 29);
    std::cout << var << '\n';

    return 0;
}

int minBitFlips(int start, int goal) {
    std::string st = "";
    std::string gl = "";

    while(start > 0){
        if(start % 2 == 0){
            st += '0';
        }
        else{st += '1';}
        start /= 2;
    }

    while(goal > 0){
        if(goal % 2 == 0){
            gl += '0';
        }
        else{gl += '1';}
        goal /= 2;
    }
    std::reverse(st.begin(), st.end());
    std::reverse(gl.begin(), gl.end());

    if(st.size() > gl.size()){
        gl.insert(gl.begin(), st.size() - gl.size(), '0');
    }

    if(st.size() < gl.size()){
        st.insert(st.begin(), gl.size() - st.size(), '0');
    }

    int count = 0;
    int flip = 0;

    while(count < st.size() && count < gl.size()){
        if(st[count] != gl[count]){flip += 1;}
        count += 1;
    }
    return flip;
}

