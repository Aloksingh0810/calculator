#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    char choice;

    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "enter the operator" << endl;
    cin >> choice;
    switch (choice)
    {
    case '+':
        result = num1 + num2;
        cout << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << result << endl;
        break;

    case '/':
        result = num1 / num2;
        cout << "result" << result << endl;
        break;
    }

    return 0;
}