#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    // get the first number
    cout << "Please enter your first number: ";
    cin >> num1;

    // get the second number
    cout << "Please enter your second number: ";
    cin >> num2;

    // make sure num1  is the smaller between them
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // loop and print the numbers between them
    cout << "Numbers between " << num1 <<" and " << num2<< " : ";
    for (int i = num1 +1 ; i <= num2 -1; i++)
        cout << i << " ,";

    return 0;
}
