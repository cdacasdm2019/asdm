# include <iostream>
using namespace std;

int main()
{
    char operator;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> operator;

    cout << "Enter two Numbers: ";
    cin >> num1 >> num2;

    switch(operator)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
