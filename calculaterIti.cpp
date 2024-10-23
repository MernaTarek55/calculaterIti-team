// calculaterIti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;


int Subtract(int num1, int num2) {
    int subtractnum = num1 - num2;
    return subtractnum;
}

int Modulus(int num1, int num2) {
    int modulus = num1 % num2;
    return modulus;
}


int Multiplication(int number1, int number2) {
    return number1 * number2;
}

int power(int number1, int number2) {
    int answer = 1;
    for (int i = 0; i < number2; ++i) {
        answer *= number1;
    }
    return answer;
}

int Addition (int number1, int number2) {
    return number1 + number2;
}
float Division (float number1, float number2) {
    return number1 / number2;
}

int extractNumber(const string& operation, int& index) {
    string numberStr = "";

    while (index < operation.size() && operation[index] == ' ')
        index++;

    while (index < operation.size() && isdigit(operation[index])) {
        numberStr += operation[index];
        index++;
    }

    return stoi(numberStr);
}

int main() {
    string operation;
    cout << "Welcome to our Calculator, please enter the operation: ";
    getline(cin, operation);

    int index = 0;

    int number1 = extractNumber(operation, index);

    while (index < operation.size() && operation[index] == ' ')
        index++;

    char op = operation[index];
    index++;

    while (index < operation.size() && operation[index] == ' ')
        index++;

    int number2 = extractNumber(operation, index);

    int result;
    switch (op) {
        case '+':
            result = Addition(number1, number2);
            break;
        case '-':
            result = Subtract(number1, number2);
            break;
        case '%':
            result = Modulus(number1, number2);
            break;
        case '/':
            result = Division(number1, number2);
            break;
        case '*':
            result = Multiplication(number1, number2);
            break;
        case '^':
            result = power(number1, number2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}



  