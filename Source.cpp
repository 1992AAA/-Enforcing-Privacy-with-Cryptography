#include<iostream>
using namespace std;

int main()
{
	int number1, number2, number3, number4 , temp1 = 0 , temp2 = 0;
	cout << "Enter a 4 digit number only: \n"; cin >> number1 >> number2 >> number3 >> number4;

	number1 += 7;
	number2 += 7;
	number3 += 7;
	number4 += 7;

	number1 %= 10;
	number2 %= 10;
	number3 %= 10;
	number4 %= 10;

	temp1 = number1;
	number1 = number3;
	number3 = temp1;

	temp2 = number2;
	number2 = number4;
	number4 = temp2;


	cout << number1 << number2 << number3 << number4 << endl;

}