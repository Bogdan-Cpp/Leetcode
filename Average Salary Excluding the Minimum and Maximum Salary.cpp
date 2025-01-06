#include <iostream>
#include <vector>
#include <algorithm>

double average(std::vector<int> salary);

int main(){
    double var = average({2000, 7000, 3000, 5000});
    std::cout << var << '\n';
    
    return 0;
}

double average(std::vector<int> salary) {
    double tot = 0;
    int count = 0;

    std::sort(salary.begin(), salary.end());

    for(int i = 1; i < salary.size() - 1; i++){
        tot += salary[i];
        count += 1;
    }

    return tot / count;
}