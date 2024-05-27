#include <iostream>
using namespace std;


/// �������� �������
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
        cout << "�� ����� ����� �� ����!" << endl;
        return 0;
    }
}


/// ������� ������ �����������
int main() {
    setlocale(LC_ALL, "Ukrainian");
    double num1, num2;
    char operation;

    cout << "������ ����� �����: ";
    cin >> num1;

    cout << "������ �������� (+, -, *, /): ";
    cin >> operation;

    cout << "������ ����� �����: ";
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
        cout << "�������� ��������!" << endl;
        return 1;
    }

    cout << "���������: " << result << endl;
    return 0;
}
