#include <iostream>

void ifAnweisungen(int meineZahl);
void whileAnweisung(int x);

int main() {
    int meineZahl = 11;
    int wiederholeXmal = 5;

    ifAnweisungen(meineZahl);
    whileAnweisung(wiederholeXmal);

    return 0;
}

void ifAnweisungen(int meineZahl) {

    // Eine Verschachtelte If Anweisung
    if(meineZahl > 0) {
        std::cout << "Deine Zahl ist positiv.";
    } else {
        if(meineZahl == 0) {
            std::cout << "Deine Zahl ist Null.";
        } else {
            std::cout << "Dann ist wohl deine Zahl negativ.";
        }
    }
}

void whileAnweisung(int x) {
    while(x >= 0){
        std::cout << x;
        x--; // Wichtig sonst läuft die Schleife unendlich oft! 
             // x-- bedeutet das gleiche wie: x=x-1
    }
}

void kek(){
    while(/*Bedingung*/){

    }

    if(/*Bedingung*/) {
        // Wenn Bedingung == True mach A
    } else {
        // Wenn Bedingung == False mach B
    }
}