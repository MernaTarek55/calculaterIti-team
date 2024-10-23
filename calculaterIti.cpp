#include <iostream>
using namespace std;

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

int main()
{
    cout << "Hello World!\n";
}