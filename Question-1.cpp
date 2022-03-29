#include <iostream>

using namespace std;

bool CheckDigitDiff(int);

int main()
{
    int number;
    bool a;
    cout << "Give me a number(with 3 digit): ";
    
    cin >> number;
    if (CheckDigitDiff(number))
    {
        cout << "The Digits of Number is not same";
    }

    else
    {
        cout << "The Digits of Number is same";
    }
}
bool CheckDigitDiff(int num)
{
    int a, b, c;
    a = num / 100;
    num = num - (a * 100);
    b = num / 10;
    num = num - (b * 10);
    c = num;
    if (a == b || a == c || c == b)
    {
        return false;
    }
    else
    {
        return true;
    }
}
