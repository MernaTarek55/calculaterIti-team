// calculaterIti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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

int main()
{
    std::cout << "Hello World!\n";
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
