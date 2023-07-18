#include <iostream>

using namespace std;

int getDigit(const int number);
int sumOddNumbers(const string cardNumber);
int sumEvenNumbers(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter the credit card number: " << endl;
    cin >> cardNumber;

    result = sumEvenNumbers(cardNumber) + sumOddNumbers(cardNumber);

    if(result % 10 == 0)
    {
        cout << "The card number " << cardNumber << " is valid!";
    }
    else
    {
        cout << "The card number " << cardNumber << " is not valid!";
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
};
int sumOddNumbers(const string cardNumber)
{
    int sum =0;

    for (int i = cardNumber.size()- 1 ; i >= 0; i-=2)
    {
        sum += (cardNumber[i] - '0');
    }
    return sum;
};
int sumEvenNumbers(const string cardNumber)
{
    int sum =0;

    for (int i = cardNumber.size() - 2 ; i >= 0; i-=2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
};
