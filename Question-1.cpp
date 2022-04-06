#include <iostream>
using namespace std;
int main()
{
    int number;
    int i = 1;
    cout << "Number: ";
    cin >> number;
    while (i <= number)
    {
        if (number % i == 0)
            cout << " " << i;
        i++;
    }
}
