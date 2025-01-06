#include <iostream>
#include <vector>

std::vector<double> convertTemperature(double celsius);

int main(){
   system("pause");
   return 0;
}

std::vector<double> convertTemperature(double celsius) {
    std::vector<double> lista;
    
    lista.push_back(celsius + 273.15);
    lista.push_back(celsius * 1.80 + 32.00);
    return lista;
}