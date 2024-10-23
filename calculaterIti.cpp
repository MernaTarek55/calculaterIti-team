// calculaterIti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

int Multiplication(int number1, int number2) {
    return number1 * number2;
}

int power(int number1, int number2) {
    return number1^number2;
}

int Addition (int number1, int number2) {
return number1 + number2;
}
float Division (float number1, float number2) {
    return number1 / number2;
}

long long Factorial (int number) {
    if (number == 1 || number == 0)
        return 1;
    return number * Factorial(number - 1);
}


double SquareRoot(double number)
{
    double error = 0.00001; //define the precision of your result
    double s = number;

    while ((s - number / s) > error) //loop until precision satisfied
    {
        s = (s + number / s) / 2;
    }
    return s;
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
    case '/':
        result = Division(number1, number2);
        break;
    case '!':
        result = Factorial(number1);
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



  