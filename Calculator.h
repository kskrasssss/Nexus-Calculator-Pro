#ifndef UNTITLED7_CALCULATOR_H
#define UNTITLED7_CALCULATOR_H

template <typename T>
class Calculator {
public:

    T add(T a, T b) {
        return a + b;
    };
    T subtract(T a, T b) {
        return a - b;
    };
    T multiply(T a, T b) {
        return a * b;
    }
    T division(T a, T b){
        if (b == 0) {
            std::cout << "Division by zero!" << std::endl;
            return -1;
        }
        return a / b;
    }
};



#endif // UNTITLED7_CALCULATOR_H
