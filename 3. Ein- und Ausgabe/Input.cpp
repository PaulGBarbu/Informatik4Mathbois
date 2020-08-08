#include <iostream>
#include <iomanip>

int main(){
    int a;
    int b;
    int c;
    
    std::cin >> a >> b >> c;

    // Ausgabe:    1   3   7
    std::cout << a << std::setw(3) << b << std::setw(3) << c;
}