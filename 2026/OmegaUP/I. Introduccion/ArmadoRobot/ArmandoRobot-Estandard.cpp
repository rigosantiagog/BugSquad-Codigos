#include <iostream>

int main(){
    int C = 0, R = 0, S = 0, B = 0, T = 0;

    std::cout << "Dame la cantidad de tipos de Chasis que hay: ";
    std::cin >> C;
    std::cout << "Dame la cantidad de tipos de Ruedas que hay: ";
    std::cin >> R;
    std::cout << "Dame la cantidad de tipos de Sesores que hay: ";
    std::cin >> S;
    std::cout << "Dame la cantidad de tipos de Baterias que hay: ";
    std::cin >> B;
    
    T  = C * R * S * B;
    
    std::cout << "Total de combinaciones: " << T;
    
    return 0;
}