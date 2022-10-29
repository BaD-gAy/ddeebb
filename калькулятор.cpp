#include <iostream>

using namespace std;

int sum(int number1, int number2) //сумма
{
	number1 = number1 + number2; 
	return number1;
}

int denial(int number1, int number2) //отрицание
{
	number1 = number1 - number2;
	return number1;
}

int multiplication(int number1, int number2)
{
	number1 = number1 * number2;
	return number1;
}

int division(int number1, int number2)
{
	number1 = (float) number1 / number2;
	return number1;
}

int main()
{
	int operation;
	cout << "Select an operation:" << endl << //выберите операцию
		"1. +" << endl <<
		"2. -" << endl <<
		"3. *" << endl <<
		"4. %" << endl;
	cin >> operation;

	if (operation > 4)
	{
		cout << "There is no such operation!";
	}
	else
	{
	int number1, number2;
		cout << "Enter two numbers: " << endl; //введите два числа
		cin >> number1 >> number2;

		switch (operation)
		{
		case 1:
			cout << "Sum result = " << sum(number1, number2) << endl; //результат суммы
			break;
		case 2:
			cout << "Result of subtraction = " << denial(number1, number2) << endl; //результат вычитания
			break;
		case 3:
			cout << "Result of multiplication = " << multiplication(number1, number2) << endl; //результат умножения
			break;
		case 4:
			cout << "Division result = " << division(number1, number2) << endl; //результат деления
			break;
		}
	}
}



