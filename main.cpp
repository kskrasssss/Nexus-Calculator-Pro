#include <iostream>

#include "Calculator.h"


int main() {
    std::cout << "--- Nexus Calculator v1.0 ---" << std::endl;
    Calculator<int> calc;
    int result = calc.add(1, 50);
    std::cout << result << std::endl;

	// ... (Here you can add code to demonstrate the usage of the Calculator class)

    return 0;
}
