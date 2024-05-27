#include <iostream>
using namespace std;


/// Визначте функції
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
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
        cout << "Не можна ділити на нуль!" << endl;
        return 0;
    }
}


/// Обробка запитів користувача
int main() {
    setlocale(LC_ALL, "Ukrainian");
    double num1, num2;
    char operation;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть оператор (+, -, *, /): ";
    cin >> operation;

    cout << "Введіть друге число: ";
    cin >> num2;

    double result;
    switch (operation) {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        cout << "Недійсний оператор!" << endl;
        return 1;
    }

    cout << "Результат: " << result << endl;
    return 0;
}
