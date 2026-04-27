#ifndef UNTITLED7_CALCULATOR_H
#define UNTITLED7_CALCULATOR_H

template <typename T>
class Calculator {
public:

    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b);
    T divide(T a, T b);
    T multiply(T a, T b) {
        return a * b;
    }
    T divide(T a, T b){
        return a / b;
    }
};



#endif // UNTITLED7_CALCULATOR_H
