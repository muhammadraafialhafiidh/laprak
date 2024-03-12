#include <iostream>

using namespace std;

int main()
{

    char op;
    float num1, num2;
    // it allows user to enter operator i.e. +, -, *,/
    cout << "Masukkan Operator : ";
    cin >> op;
    // it allows user to enter the operands
    cout << "Masukkan Angka 1: ";
    cin >> num1;
    cout << "Masukkan Angka 2: ";
    cin >> num2;
    // switch statement begins
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
    } // switch statements ends
    return 0;
}