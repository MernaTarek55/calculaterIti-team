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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
