#include <iostream>
#include <cmath>

double myPow(double x, int n);

int main(){
    std::cout << myPow(2.00000, 10) << " ";
    std::cout << myPow(2.10000, 3) << " ";
    std::cout << myPow(2.00000, -2) << " ";
    system("pause");
    return 0;
}

double myPow(double x, int n){
    double n2 = static_cast<double>(n);
    if(n < 0){
        double total = pow((1/x), n2 * -1);
        return total;
    }
    
    double tot = pow(x, n);
    return tot;
}