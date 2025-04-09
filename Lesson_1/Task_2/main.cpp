#include <iostream>

using namespace std;

int main()
{
    float num1, num2, res;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;

    char oper;
    cout << "What you want to do: +, -, / or * ?" << endl;
    cin >> oper;

    if (oper == '+' )
        res = num1 + num2;
    else if (oper == '-' )
        res = num1 - num2;
    else if (oper == '/' )
        res = num1 / num2;
    else if (oper == '*' )
        res = num1 * num2;
    else
        cout << "ERROR! Please choose one of the operation and try again " << endl;

    cout << "Your answer is: " << res << endl;
    return 0;
}
