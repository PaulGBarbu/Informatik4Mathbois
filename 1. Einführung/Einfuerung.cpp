#include <iostream>

void sayHello();
int addTwoNumbers(int a, int b);

// Globale Variable
int a = 5;

int main()
{
    // Lokale Variablen
    int b = 2;
    int c;

    // Funktionsaufruf von sayHello()
    sayHello();

    
    // addTwoNumbers gibt das Ergebnis von a + b zurück welches in c gespeichert wird
    // das Ergebnis wird anschließend auf der Konsole ausgegeben.
    c = addTwoNumbers(a,b);
    std::cout<<c;

    return 0;
}

void sayHello()
{
    std::cout<<"Hello World";
}

int addTwoNumbers(int a, int b)
{
    return a + b;
}