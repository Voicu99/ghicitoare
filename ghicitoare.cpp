// ghicitoare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main() {
    // Folosim std::random_device pentru a obține un număr aleatoriu
    std::random_device rd;
    std::mt19937 gen(rd()); // Inițializăm generatorul cu o valoare aleatoare

    // Generăm un număr aleatoriu între 1 și 10
    std::uniform_int_distribution<> distributie(1, 10);
    const int numarAles = distributie(gen);

    int ghicitor;
    std::cout << "Ghiceste numarul intre 1 si 10: ";
    std::cin >> ghicitor;

    if (ghicitor < numarAles) {
        std::cout << "Prea mic! Incearca din nou." << std::endl;
    }
    else if (ghicitor > numarAles) {
        std::cout << "Prea mare! Incearcă din nou." << std::endl;
    }
    else {
        std::cout << "Felicitari! Ai ghicit numarul." << std::endl;
    }

    return 0;
}