#include <iostream>
#include <iomanip>

int main(){
    int a = 1;
    int b = 3;
    int c = 7;
    

    // Ausgabe: 137
    std::cout << a << b << c;
    
    // Ausgabe:    1   3   7
    std::cout << std::setw(3) << a << std::setw(3) << b << std::setw(3) << c;

    // Ausgabe: a = 1 ,b = 3 ,c = 7
    std::cout << "a = " << a << " ,b = " << b << " ,c = "<< c;

}