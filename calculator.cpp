#include <iostream>
using namespace std;


/// Определите функции
double add(double a, double b) {
    return a + b;
}

double minus(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}
