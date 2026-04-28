#include <iostream>

#include "Calculator.h"


template<typename T>
int main() {
    std::cout << "--- Nexus Calculator ---" << std::endl;
    Calculator<int> calc;
    T n, m;
    
    int choice;
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";

    switch (choice) {
        case 1:
            std::cout << "Enter two numbers: ";
            std::cin >> n >> m;
            std::cout << "Result: " << calc.add(n, m) << std::endl;
            break;
        case 2:
            std::cout << "Enter two numbers: ";
            std::cin >> n >> m;
            std::cout << "Result: " << calc.subtract(n, m) << std::endl;
            break;
        case 3:
            std::cout << "Enter two numbers: ";
            std::cin >> n >> m;
            std::cout << "Result: " << calc.multiply(n, m) << std::endl;
            break;
        case 4:
            std::cout << "Enter two numbers: ";
            std::cin >> n >> m;
            std::cout << "Result: " << calc.division(n, m) << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    
	

    return 0;
}
